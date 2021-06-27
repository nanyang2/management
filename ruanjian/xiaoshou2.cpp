#include "xiaoshou2.h"
#include "ui_xiaoshou2.h"
#include"xx0.h"
#include "QMessageBox"
xiaoshou2::xiaoshou2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::xiaoshou2)
{
    ui->setupUi(this);
}

xiaoshou2::~xiaoshou2()
{
    delete ui;
}

void xiaoshou2::on_pushButton_2_clicked()
{
    this->close();;
    xx0  *p=new xx0();
    p->show();
}

void xiaoshou2::on_pushButton_clicked()
{
    QMessageBox::information(this,"提示","审核中···");
}
