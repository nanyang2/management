#ifndef XIAOSHOU1_H
#define XIAOSHOU1_H

#include <QWidget>

namespace Ui {
class xiaoshou1;
}

class xiaoshou1 : public QWidget
{
    Q_OBJECT

public:
    explicit xiaoshou1(QWidget *parent = nullptr);
    ~xiaoshou1();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::xiaoshou1 *ui;
};

#endif // XIAOSHOU1_H
