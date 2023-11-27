#ifndef TRANSFER_H
#define TRANSFER_H

#include <QWidget>
#include <QSqlQueryModel>

namespace Ui {
class Transfer;
}

class Transfer : public QWidget
{
    Q_OBJECT

public:
    explicit Transfer(QWidget *parent = nullptr);
    ~Transfer();

private slots:
    void on_pushButton_2_clicked();

    void on_toolButton_clicked();

    int getItemClicked(int index);

private:
    Ui::Transfer *ui;
    QSqlQueryModel *model;

signals :
    void HomeClicked();

};
#endif // TRANSFER_H
