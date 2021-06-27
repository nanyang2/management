#include "x3.h"
#include "ui_x3.h"
#include "kehu.h"
#include "mainwindow.h"
x3::x3(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::x3)
{
    ui->setupUi(this);
}

x3::~x3()
{
    delete ui;
}

void x3::on_pushButton_3_clicked()
{
    this->close();
    MainWindow *p=new MainWindow();
    p->show();
}

void x3::on_pushButton_2_clicked()
{
    this->close();
    kehu *p=new kehu();
    p->show();
}
