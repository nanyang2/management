#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "x1.h"
#include "x2.h"
#include "x3.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_commandLinkButton_clicked()
{
    this->close();
    x1 *p=new x1();
    p->show();
}

void MainWindow::on_commandLinkButton_2_clicked()
{
    this->close();
    x2 *p=new x2();
    p->show();
}

void MainWindow::on_commandLinkButton_3_clicked()
{
    this->close();
    x3 *p=new x3();
    p->show();
}
