#ifndef SHOWBANKNAME_H
#define SHOWBANKNAME_H

#include <QWidget>
#include <QSqlQueryModel>
#include <QModelIndex>

namespace Ui {
class ShowBankName;
}

class ShowBankName : public QWidget
{
    Q_OBJECT

public:
    explicit ShowBankName(QWidget *parent = nullptr);
    ~ShowBankName();

signals:
    void itemClicked(int index);

private slots:
    void indexClicked(const QModelIndex &index);

private:
    Ui::ShowBankName *ui;
    QSqlQueryModel *model;
};

#endif // SHOWBANKNAME_H
