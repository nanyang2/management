#include "xx0.h"
#include "ui_xx0.h"
#include "x1.h"
#include"xiaoshou1.h"
#include"xiaoshou2.h"
#include"xiaoshou3.h"
#include<QFile>
#include<QtDebug>
#include<QVector>
xx0::xx0(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::xx0)
{
    ui->setupUi(this);
}

xx0::~xx0()
{
    delete ui;
}

void xx0::on_pushButton_4_clicked()
{
    this->close();
    x1 *p=new x1();
    p->show();
}

void xx0::on_pushButton_clicked()
{
    this->close();
    xiaoshou1 *p=new xiaoshou1();
    p->show();
}

void xx0::on_pushButton_2_clicked()
{
    this->close();
    xiaoshou2 *p=new xiaoshou2();
    p->show();
}

void xx0::on_pushButton_3_clicked()
{
    this->close();
    xiaoshou3 *p=new xiaoshou3();
    p->show();
}
