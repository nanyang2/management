#ifndef XIAOSHOU2_H
#define XIAOSHOU2_H

#include <QWidget>

namespace Ui {
class xiaoshou2;
}

class xiaoshou2 : public QWidget
{
    Q_OBJECT

public:
    explicit xiaoshou2(QWidget *parent = nullptr);
    ~xiaoshou2();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::xiaoshou2 *ui;
};

#endif // XIAOSHOU2_H
