#ifndef KEHU2_H
#define KEHU2_H

#include <QWidget>

namespace Ui {
class kehu2;
}

class kehu2 : public QWidget
{
    Q_OBJECT

public:
    explicit kehu2(QWidget *parent = nullptr);
    ~kehu2();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::kehu2 *ui;
};

#endif // KEHU2_H
