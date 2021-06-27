#ifndef XX0_H
#define XX0_H

#include <QWidget>

namespace Ui {
class xx0;
}

class xx0 : public QWidget
{
    Q_OBJECT

public:
    explicit xx0(QWidget *parent = nullptr);
    ~xx0();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::xx0 *ui;
};

#endif // XX0_H
