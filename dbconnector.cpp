#include "dbconnector.h"

#include <QFileInfo>
#include <QSqlQuery>
#include <QSqlError>

DBConnector::DBConnector() {
    this->db = QSqlDatabase::addDatabase("QSQLITE");
    this->db.setDatabaseName("./" + this->dbName);

    if (!this->db.open()) {
        qDebug() << "Error: connection with database failed";
        return;
    }
    else {
        qInfo() << "Database: connection ok";
    }

    this->db.commit();

    QSqlQuery query(this->db);
    query.exec("SELECT name FROM my_db.sqlite_master WHERE type='table';");
    // SELECT * FROM tablename
    // SELECT name FROM my_db.sqlite_master WHERE type='table'

    while (query.next()) {
        QString tableName{query.value(0).toString()};

        this->dbTables.push_back(tableName);
    }

}

bool DBConnector::connectToDB() {
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

QVector<QString> DBConnector::getDBTables() {
    return this->dbTables;
}

bool DBConnector::createNewTable(const QString& tableName) {
    this->db.setDatabaseName(this->dbName);
    if (!this->db.open()) {
        qDebug() << "Error: connection with database failed";
        return false;
    }
    else {
        qInfo() << "Database: connection ok";
    }

    QSqlQuery query(this->db);
    QString request = "CREATE TABLE %1 (id INTEGER PRIMARY KEY, ip TEXT, os TEXT, ports TEXT);";
    if(query.exec(request.arg(tableName))) {
        qInfo() << "SUCCESS CREATE TABLE" << tableName;
        this->dbTables.push_back(tableName);
    }
    else {
        qDebug() << "CREATE TABLE" << tableName << "ERROR:" << query.lastError();
        return false;
    }

    if(query.exec("INSERT INTO test (ip, os) VALUES ('111.111.111.111', 'windowsss');")) {
        qInfo() << "SUCCESS add value";
    }
    else {
        qDebug() << "Erroradd vlue";
        return false;
    }



    db.commit();
    db.close();

    return true;
}

bool DBConnector::chooseTable(const QString& tableName) {
    QVector<QString>::iterator it = std::find(this->dbTables.begin(), this->dbTables.end(), tableName);

    if(it != this->dbTables.end()) {
        this->currentTable = tableName;
        return true;
    } else {
        qDebug() << "Table" << tableName << "doesn't exists";
    }
    return false;
}
