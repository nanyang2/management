#include "x1.h"
#include "ui_x1.h"
#include "mainwindow.h"
#include "xx0.h"
#include "QMessageBox"
x1::x1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::x1)
{
    ui->setupUi(this);
}

x1::~x1()
{
    delete ui;
}

void x1::on_pushButton_3_clicked()
{
    this->close();
    MainWindow *p=new MainWindow();
    p->show();
}

void x1::on_pushButton_2_clicked()
{
    QString name=ui->lineEdit_2->text();
    if(name=="193401050121")
    {
    this->close();
    xx0 *p=new xx0();
    p->show();
    }
    else
    {
        QMessageBox::information(this,"提示","账号密码错误！！！");
    }
}
