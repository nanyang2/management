#include "jingli1.h"
#include "ui_jingli1.h"

jingli1::jingli1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::jingli1)
{
    ui->setupUi(this);
}

jingli1::~jingli1()
{
    delete ui;
}
