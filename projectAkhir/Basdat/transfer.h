#ifndef TRANSFER_H
#define TRANSFER_H

#include <QWidget>

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

    void on_pushButton_clicked();

private:
    Ui::Transfer *ui;

signals :
    void HomeClicked();

};
#endif // TRANSFER_H
