#include "jingli.h"
#include "ui_jingli.h"
#include "x2.h"
jingli::jingli(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::jingli)
{
    ui->setupUi(this);
}

jingli::~jingli()
{
    delete ui;
}

void jingli::on_pushButton_4_clicked()
{
    this->close();
    x2 *p=new x2();
    p->show();
}
