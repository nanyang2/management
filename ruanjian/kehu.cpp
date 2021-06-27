#include "kehu.h"
#include "ui_kehu.h"
#include "x3.h"
#include "kehu1.h"
#include "kehu2.h"
kehu::kehu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::kehu)
{
    ui->setupUi(this);
}

kehu::~kehu()
{
    delete ui;
}

void kehu::on_pushButton_4_clicked()
{
    this->close();
    x3 *p=new x3();
    p->show();
}

void kehu::on_pushButton_clicked()
{
    this->close();
    kehu1 *p=new kehu1();
    p->show();
}

void kehu::on_pushButton_2_clicked()
{
    this->close();
    kehu2 *p=new kehu2();
    p->show();
}
