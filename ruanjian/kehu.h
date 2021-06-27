#ifndef KEHU_H
#define KEHU_H

#include <QWidget>

namespace Ui {
class kehu;
}

class kehu : public QWidget
{
    Q_OBJECT

public:
    explicit kehu(QWidget *parent = nullptr);
    ~kehu();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::kehu *ui;
};

#endif // KEHU_H
