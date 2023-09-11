#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QString>
#include <QList>
#include <QSqlDatabase>

#define defaultDBName "NetworkScanner.db"

class DBManager {
    QString  dbName{ defaultDBName };
    QSqlDatabase  db;
    QList<QString> dbTables{};
    QString currentTable{};

public:
    DBManager();

    bool connectToDB();
    QList<QString> getDBTables();
    bool createNewTable(const QString& tableName);
    bool chooseTable(const QString& tableName);
    bool tableisExist(const QString& tableName);
    void closeDB();
    bool addNewIP(const QString& ip, const QString& os = "", const QString& ports = "");
};

#endif // DBMANAGER_H
