#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFont>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void timeout();

private slots:

    void on_switch_player1_clicked();

    void on_switch_player2_clicked();

    void on_settime120_sec_clicked();

    void on_settime5_min_clicked();

    void on_startgame_clicked();

    void on_stopgame_clicked();

    void updateProgressBar();
private:
    short player1Time;
    short player2Time;
    short currentPlayer;
    short gameTime;
    QTimer *pQTimer;
    Ui::MainWindow *ui;

    void setGameInfoText(QString,short);
};
#endif // MAINWINDOW_H
