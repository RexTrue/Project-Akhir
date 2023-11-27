#ifndef HISTORY_H
#define HISTORY_H

#include <QWidget>

namespace Ui {
class History;
}

class History : public QWidget
{
    Q_OBJECT

public:
    explicit History(QWidget *parent = nullptr);
    ~History();

private:
    Ui::History *ui;

signals:
    void HomeClicked();
private slots:
    void on_pushButton_clicked();
};

#endif // HISTORY_H
