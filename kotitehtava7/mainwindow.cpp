#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pQTimer = new QTimer();
    ui->progressBar1->setMinimum(0);
    ui->progressBar2->setMinimum(0);
    ui->progressBar1->setMaximum(100);
    ui->progressBar2->setMaximum(100);
    setGameInfoText("Select playtime and press start game!",20);
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
    if (player1Time == 0) {
        setGameInfoText("Player 2 WON!!",30);
        pQTimer->stop();
    } else if (player2Time == 0) {
        setGameInfoText("Player 1 WON!!",30);
        pQTimer->stop();
    }
    switch (currentPlayer) {
    case 1:
        player1Time--;
        break;
    case 2:
        player2Time--;
        break;
    }
    updateProgressBar();
}


void MainWindow::on_switch_player1_clicked()
{
    currentPlayer = 2;
    ui->switch_player1->hide();
    ui->switch_player2->show();
}


void MainWindow::on_switch_player2_clicked()
{
    currentPlayer = 1;
    ui->switch_player2->hide();
    ui->switch_player1->show();
}


void MainWindow::on_settime120_sec_clicked()
{
    player1Time = 100;
    player2Time = 100;
    gameTime = 1;
    setGameInfoText("Ready to play",20);
    updateProgressBar();
}


void MainWindow::on_settime5_min_clicked()
{
    player1Time = 100;
    player2Time = 100;
    gameTime = 2;
    setGameInfoText("Ready to play",20);
    updateProgressBar();
}


void MainWindow::on_startgame_clicked()
{
    currentPlayer = 1;
    ui->switch_player1->show();
    ui->switch_player2->show();
    switch (gameTime) {
    case 1:
        setGameInfoText("Game ongoing",25);
        connect(pQTimer, SIGNAL(timeout()), this, SLOT(timeout()));
        pQTimer->start(1200);
        break;
    case 2:
        setGameInfoText("Game ongoing",25);
        connect(pQTimer, SIGNAL(timeout()), this, SLOT(timeout()));
        pQTimer->start(3000);
        break;
    }
}


void MainWindow::on_stopgame_clicked()
{
    pQTimer->stop();
    player1Time = 0;
    player2Time = 0;
    setGameInfoText("New game via start button",20);
    updateProgressBar();
}

void MainWindow::updateProgressBar()
{
    ui->progressBar1->setValue(player1Time);
    ui->progressBar2->setValue(player2Time);
}

void MainWindow::setGameInfoText(QString infoText, short fontSize)
{
    ui->gameinfotext->setText(infoText);
    static QFont font = ui->gameinfotext->font();
    font.setPointSize(fontSize);
    font.setBold(true);
    ui->gameinfotext->setFont(font);
}

