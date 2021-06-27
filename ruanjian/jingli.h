#ifndef JINGLI_H
#define JINGLI_H

#include <QWidget>

namespace Ui {
class jingli;
}

class jingli : public QWidget
{
    Q_OBJECT

public:
    explicit jingli(QWidget *parent = nullptr);
    ~jingli();

private slots:
    void on_pushButton_4_clicked();

private:
    Ui::jingli *ui;
};

#endif // JINGLI_H
