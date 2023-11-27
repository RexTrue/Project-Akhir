#include "report.h"
#include "ui_report.h"

Report::Report(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Report)
{
    ui->setupUi(this);
}

Report::~Report()
{
    delete ui;
}

void Report::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(0);
}


void Report::on_pushButton_2_clicked()
{
    emit HomeClicked();
}

