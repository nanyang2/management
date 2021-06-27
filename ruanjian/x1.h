#ifndef X1_H
#define X1_H

#include <QWidget>

namespace Ui {
class x1;
}

class x1 : public QWidget
{
    Q_OBJECT

public:
    explicit x1(QWidget *parent = nullptr);
    ~x1();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::x1 *ui;
};

#endif // X1_H
