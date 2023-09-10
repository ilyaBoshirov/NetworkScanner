#ifndef DBCONNECTOR_H
#define DBCONNECTOR_H

#include <QString>
#include <QVector>
#include <QSqlDatabase>

#define defaultDBName "NetworkScanner.db"

class DBConnector {
    QString  dbName;
    QSqlDatabase  db;
    QVector<QString> dbTables{};
    QString currentTable{};

public:
    DBConnector();

    bool connectToDB();
    QVector<QString> getDBTables();
    bool createNewTable(const QString& tableName);
    bool chooseTable(const QString& tableName);
};

#endif // DBCONNECTOR_H
