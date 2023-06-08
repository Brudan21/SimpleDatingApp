#include "loginwindow.h"
#include "./ui_loginwindow.h"
#include"mainwindow.h"

LoginWindow::LoginWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setProperty("currentIndex",1);
}


void LoginWindow::on_pushButton_2_clicked()
{




}


