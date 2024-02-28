#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    time = 300;
    ui->progressBar->setMinimum(0);
    ui->progressBar->setMaximum(100);
    ui->progressBar->setValue(100);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete pQTimer;
    ui = nullptr;
    pQTimer = nullptr;
}

void MainWindow::timeout()
{
    time--;
    updateProgressBar();
}

void MainWindow::on_pushButton_clicked()
{
    pQTimer = new QTimer();
    connect(pQTimer, SIGNAL(timeout()), this, SLOT(timeout()));
    pQTimer->start(1000);
}

void MainWindow::updateProgressBar()
{
    ui->progressBar->setValue(time);
    qDebug()<<"Aika on "<<time;
}
