#include "xiaoshou1.h"
#include "ui_xiaoshou1.h"
#include"xx0.h"
#include<QFile>
#include<QtDebug>
#include<QVector>
xiaoshou1::xiaoshou1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::xiaoshou1)
{
    ui->setupUi(this);
}

xiaoshou1::~xiaoshou1()
{
    delete ui;
}

void xiaoshou1::on_pushButton_2_clicked()
{
    QString FilePath="D:\\xiaoshou.txt";
    QFile file(FilePath);
    file.open(QIODevice::ReadOnly|QIODevice::Text);
    QTextStream inp(&file);
    ui->pushButton->setText(file.readAll());
}

void xiaoshou1::on_pushButton_3_clicked()
{
    this->close();;
    xx0  *p=new xx0();
    p->show();
}
