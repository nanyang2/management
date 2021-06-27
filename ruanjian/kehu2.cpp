#include "kehu2.h"
#include "ui_kehu2.h"
#include"kehu.h"
#include<QFile>
#include<QtDebug>
#include<QVector>
#include "QMessageBox"
kehu2::kehu2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::kehu2)
{
    ui->setupUi(this);
}

kehu2::~kehu2()
{
    delete ui;
}

void kehu2::on_pushButton_clicked()
{
    QString name =ui->lineEdit->text();
    QString sname =ui->lineEdit_2->text();
    QString sFilePath="D:\\weixiuqingkuang.txt";
    QFile file(sFilePath);
    file.open(QIODevice::WriteOnly|QIODevice::Text|QIODevice::Append);
    QTextStream out (&file);
    out<<name<<" "<<sname<<endl;
    out.flush();
    file.close();
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
     QMessageBox::information(this,"提示","提交成功！！！");
}

void kehu2::on_pushButton_2_clicked()
{
    this->close();
    kehu *pi=new kehu();
    pi->show();

}
