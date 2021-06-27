#ifndef JINGLI1_H
#define JINGLI1_H

#include <QWidget>

namespace Ui {
class jingli1;
}

class jingli1 : public QWidget
{
    Q_OBJECT

public:
    explicit jingli1(QWidget *parent = nullptr);
    ~jingli1();

private:
    Ui::jingli1 *ui;
};

#endif // JINGLI1_H
