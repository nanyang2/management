#ifndef X2_H
#define X2_H

#include <QWidget>

namespace Ui {
class x2;
}

class x2 : public QWidget
{
    Q_OBJECT

public:
    explicit x2(QWidget *parent = nullptr);
    ~x2();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::x2 *ui;
};

#endif // X2_H
