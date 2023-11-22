#include "showbankname.h"
#include "ui_showbankname.h"

#include <QSqlQuery>
#include <QModelIndex>

ShowBankName::ShowBankName(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ShowBankName)
{
    ui->setupUi(this);

    model = new QSqlQueryModel();
    model->setQuery("SELECT nama FROM user");

    ui->listView->setModel(model);

    connect(ui->listView, SIGNAL(clicked(const QModelIndex &)), this, SLOT(indexClicked(const QModelIndex &)));
}

ShowBankName::~ShowBankName()
{
    delete ui;
}

void ShowBankName::indexClicked(const QModelIndex &index)
{
    emit indexClicked(index);
}
