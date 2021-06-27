#ifndef XIAOSHOU3_H
#define XIAOSHOU3_H

#include <QWidget>

namespace Ui {
class xiaoshou3;
}

class xiaoshou3 : public QWidget
{
    Q_OBJECT

public:
    explicit xiaoshou3(QWidget *parent = nullptr);
    ~xiaoshou3();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::xiaoshou3 *ui;
};

#endif // XIAOSHOU3_H
