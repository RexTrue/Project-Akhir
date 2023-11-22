#include "login.h"

#include <QApplication>
#include <QtSql/QtSql>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // Connect Sql
    auto db = QSqlDatabase::addDatabase("QMARIADB");
    db.setHostName("localhost");
    db.setDatabaseName("teller bank");
    db.setUserName("root");
    if(!db.open()){
        qFatal() << "gagal membuka database";
    }
    login w;
    w.show();
    return a.exec();
}
