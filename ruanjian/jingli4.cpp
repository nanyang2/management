#include "jingli4.h"
#include "ui_jingli4.h"
#include "jingli.h"
#include "QMessageBox"
jingli4::jingli4(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::jingli4)
{
    ui->setupUi(this);
}

jingli4::~jingli4()
{
    delete ui;
}

void jingli4::on_pushButton_clicked()
{
    this->close();
    jingli *p=new jingli();
    p->show();
}

void jingli4::on_pushButton_2_clicked()
{
     QMessageBox::information(this,"提示","提交成功！！！");
}
