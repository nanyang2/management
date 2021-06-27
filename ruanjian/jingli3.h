#ifndef JINGLI3_H
#define JINGLI3_H

#include <QWidget>

namespace Ui {
class jingli3;
}

class jingli3 : public QWidget
{
    Q_OBJECT

public:
    explicit jingli3(QWidget *parent = nullptr);
    ~jingli3();

private:
    Ui::jingli3 *ui;
};

#endif // JINGLI3_H
