#include "mainwindow.h"

#include <QApplication>
#include <QtSql/QtSql>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // Connect Sql
    auto db = QSqlDatabase::addDatabase("QMARIADB");
    db.setHostName("localhost");
    db.setDatabaseName("db burjo");
    db.setUserName("root");
    MainWindow w;
    w.show();
    return a.exec();
}
