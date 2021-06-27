#ifndef JINGLI2_H
#define JINGLI2_H

#include <QWidget>

namespace Ui {
class jingli2;
}

class jingli2 : public QWidget
{
    Q_OBJECT

public:
    explicit jingli2(QWidget *parent = nullptr);
    ~jingli2();

private:
    Ui::jingli2 *ui;
};

#endif // JINGLI2_H
