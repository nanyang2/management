#ifndef X3_H
#define X3_H

#include <QWidget>

namespace Ui {
class x3;
}

class x3 : public QWidget
{
    Q_OBJECT

public:
    explicit x3(QWidget *parent = nullptr);
    ~x3();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::x3 *ui;
};

#endif // X3_H
