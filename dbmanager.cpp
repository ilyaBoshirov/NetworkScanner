#include "dbmanager.h"

#include <QFileInfo>
#include <QSqlQuery>
#include <QSqlError>
#include <QApplication>
#include <QDir>

DBManager::DBManager() {
    this->db = QSqlDatabase::addDatabase("QSQLITE");
    this->db.setDatabaseName(QApplication::applicationDirPath() + QDir::separator() + this->dbName);

    if (!this->db.open()) {
        qDebug() << "Error: connection with database failed";
        return;
    }
    else {
        qInfo() << "Database: connection ok";
    }

    this->dbTables = this->db.tables();
}

QString DBManager::getDbName() {
    return this->dbName;
}

void DBManager::setDbName(const QString& dbName) {
    this->dbName = dbName;
}

bool DBManager::connectToDB() {
    db.close();
    db.setDatabaseName(this->dbName);
    if (!db.open()) {
        qDebug() << "Error: connection with database failed";
        return false;
    }
    else {
        qInfo() << "Database: connection ok";
    }
    return true;
}

QList<QString> DBManager::getDBTables() {
    return this->dbTables;
}

bool DBManager::createNewTable(const QString& tableName) {
    QSqlQuery query(this->db);
    QString request = "CREATE TABLE %1 (id INTEGER PRIMARY KEY, ip TEXT, ports TEXT, os TEXT);";

    if(query.exec(request.arg(tableName))) {
        qInfo() << "SUCCESS CREATE TABLE" << tableName;
        this->dbTables.push_back(tableName);
        this->currentTable = tableName;
    }
    else {
        qDebug() << "CREATE TABLE" << tableName << "ERROR:" << query.lastError();
        return false;
    }

    db.commit();

    return true;
}

bool DBManager::chooseTable(const QString& tableName) {
    if (this->tableisExist(tableName)) {
        this->currentTable = tableName;
        return true;
    } else {
        qDebug() << "Table" << tableName << "doesn't exists";
    }

    return false;
}

bool DBManager::tableisExist(const QString& tableName) {
    QList<QString>::iterator it = std::find(this->dbTables.begin(), this->dbTables.end(), tableName);

    return (it != this->dbTables.end()) ? true: false;
}

void DBManager::closeDB() {
    this->db.close();
}

bool DBManager::addNewIP(const QString& ip, const QString& ports, const QString& os) {
    QSqlQuery query(this->db);

    QString request {"INSERT INTO %1 (ip, ports, os) VALUES (:ip, :ports, :os);"};
    query.prepare(request.arg(this->currentTable));
    query.bindValue(":table", this->currentTable);
    query.bindValue(":ip", ip);
    query.bindValue(":ports", ports);
    query.bindValue(":os", os);

    if(query.exec()) {
        qInfo() << "SUCCESS" << query.lastQuery();
        this->db.commit();
        return true;
    } else {
        qInfo() << "ERROR" << query.lastQuery() << query.lastError();
        return false;
    }

    return true;
}
