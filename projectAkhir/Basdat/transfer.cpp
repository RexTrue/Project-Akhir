#include "transfer.h"
#include "ui_transfer.h"
#include "showbankname.h"

#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QListView>
#include <QModelIndex>

Transfer::Transfer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Transfer)
{
    ui->setupUi(this);

    model = new QSqlQueryModel();

    ui->lineEdit_3->setReadOnly(true);
}

Transfer::~Transfer()
{
    delete ui;
}


void Transfer::on_pushButton_2_clicked()
{
    emit HomeClicked();
}


void Transfer::on_toolButton_clicked()
{
    ;
}

int Transfer::getItemClicked(int index)
{
    ;
}

