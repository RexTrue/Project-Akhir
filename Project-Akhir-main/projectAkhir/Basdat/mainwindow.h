#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include "transfer.h"
#include "history.h"
#include "report.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

    void HomeClicked();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
    Transfer _Transfer;
    History _History;
    Report _Report;
};
#endif // MAINWINDOW_H
