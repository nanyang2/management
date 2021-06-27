#include "jingli2.h"
#include "ui_jingli2.h"

jingli2::jingli2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::jingli2)
{
    ui->setupUi(this);
}

jingli2::~jingli2()
{
    delete ui;
}
