#include "xiaoshou3.h"
#include "ui_xiaoshou3.h"
#include"xx0.h"
#include "QMessageBox"
xiaoshou3::xiaoshou3(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::xiaoshou3)
{
    ui->setupUi(this);
}

xiaoshou3::~xiaoshou3()
{
    delete ui;
}

void xiaoshou3::on_pushButton_2_clicked()
{
    this->close();;
    xx0  *p=new xx0();
    p->show();
}

void xiaoshou3::on_pushButton_clicked()
{
     QMessageBox::information(this,"提示","提交成功！！！");
}
