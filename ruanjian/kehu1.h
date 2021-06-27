#ifndef KEHU1_H
#define KEHU1_H

#include <QWidget>

namespace Ui {
class kehu1;
}

class kehu1 : public QWidget
{
    Q_OBJECT

public:
    explicit kehu1(QWidget *parent = nullptr);
    ~kehu1();

private slots:
    void on_pushButton_clicked();

    void on_lineEdit_cursorPositionChanged(int arg1, int arg2);

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::kehu1 *ui;
};

#endif // KEHU1_H
