#include "x2.h"
#include "ui_x2.h"
#include "mainwindow.h"
#include "jingli.h"
#include "QMessageBox"
x2::x2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::x2)
{
    ui->setupUi(this);
}

x2::~x2()
{
    delete ui;
}

void x2::on_pushButton_3_clicked()
{
    this->close();
    MainWindow *p=new MainWindow();
    p->show();
}

void x2::on_pushButton_2_clicked()
{
    QString name=ui->lineEdit_2->text();
    if(name=="193401050126")
    {
    this->close();
    jingli *p=new jingli();
    p->show();
    }
    else{
        QMessageBox::information(this,"提示","账号密码错误！！！");
    }
}
