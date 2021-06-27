#ifndef JINGLI4_H
#define JINGLI4_H

#include <QWidget>

namespace Ui {
class jingli4;
}

class jingli4 : public QWidget
{
    Q_OBJECT

public:
    explicit jingli4(QWidget *parent = nullptr);
    ~jingli4();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::jingli4 *ui;
};

#endif // JINGLI4_H
