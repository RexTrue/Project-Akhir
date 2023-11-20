#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
        ui->stackedWidget->insertWidget(1, &_Transfer);
        ui->stackedWidget->insertWidget(2, &_History);
        ui->stackedWidget->insertWidget(3, &_Report);

        connect(&_Transfer, SIGNAL(HomeClicked()), this, SLOT(HomeClicked()));
        connect(&_History, SIGNAL(HomeClicked()), this, SLOT(HomeClicked()));
        connect(&_Report, SIGNAL(HomeClicked()), this, SLOT(HomeClicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(&_Transfer);
}


void MainWindow::on_pushButton_4_clicked()
{
    this -> close();
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentWidget(&_History);
}

void MainWindow::HomeClicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentWidget(&_Report);
}

