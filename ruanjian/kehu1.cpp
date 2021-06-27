#include "kehu1.h"
#include "ui_kehu1.h"
#include "kehu.h"
#include<QFile>
#include<QtDebug>
#include<QVector>
kehu1::kehu1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::kehu1)
{
    ui->setupUi(this);
}

kehu1::~kehu1()
{
    delete ui;
}

void kehu1::on_pushButton_clicked()
{
    this->close();
    kehu *p=new kehu();
    p->show();
}


void kehu1::on_lineEdit_cursorPositionChanged(int arg1, int arg2)
{
    QString FilePath="D:\\weixiuqingkuang.txt";
        QFile file(FilePath);
        file.open(QIODevice::ReadOnly|QIODevice::Text);
        QTextStream inp(&file);
        ui->pushButton->setText(file.readAll());
}

void kehu1::on_pushButton_2_clicked()
{
    this->close();
    kehu *pi=new kehu();
    pi->show();
}
