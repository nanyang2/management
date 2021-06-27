#include "jingli3.h"
#include "ui_jingli3.h"

jingli3::jingli3(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::jingli3)
{
    ui->setupUi(this);
}

jingli3::~jingli3()
{
    delete ui;
}
