#ifndef MYSQL_H
#define MYSQL_H

#include<QSqlDatabase>
#include"QSqlQuery"
#include<QDebug>
#include <QSqlError>

static bool connect_to_DB(){

    qDebug() << "drivers list:" <<QSqlDatabase::drivers();
    QSqlDatabase DB_connection = QSqlDatabase::addDatabase("QMYSQL");
    DB_connection.setHostName("127.0.0.1");
    DB_connection.setUserName("root");
    DB_connection.setPort(3306);
    DB_connection.setDatabaseName("gestion_de_projet");
    DB_connection.setPassword("#_20december");


    if(DB_connection.open()) {qDebug() << "data open";
   }
    else {
        qDebug() << "data not open";

        QSqlError err = DB_connection.lastError();
        qDebug() << err.text();

     }
}


#endif // MYSQL_H
