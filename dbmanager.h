#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QList>
#include <QString>
#include <QSqlDatabase>

#define defaultDBName "NetworkScannerResults.db"

class DBManager {
    QString  dbName{ defaultDBName };
    QSqlDatabase  db;
    QList<QString> dbTables{};
    QString currentTable{};

public:
    DBManager();

    QString getDbName();
    void setDbName(const QString& dbName);

    bool connectToDB();
    QList<QString> getDBTables();
    bool createNewTable(const QString& tableName);
    bool chooseTable(const QString& tableName);
    bool tableisExist(const QString& tableName);
    void closeDB();
    bool addNewIP(const QString& ip, const QString& ports = "", const QString& os = "");
};

#endif // DBMANAGER_H
