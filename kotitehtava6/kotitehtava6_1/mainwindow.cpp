#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->counter->setText(QVariant(clickCount).toString());
}

MainWindow::~MainWindow()
{
    delete ui;
    ui = nullptr;
}


void MainWindow::on_pushButton_clicked()
{
    clickCount++;
    ui->counter->setText(QVariant(clickCount).toString());
}


void MainWindow::on_pushButton_2_clicked()
{
    clickCount=0;
    ui->counter->setText(QVariant(clickCount).toString());
}

