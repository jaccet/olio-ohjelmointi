#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
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
    void on_pushButton_clicked();

    void updateProgressBar();

private:
    Ui::MainWindow *ui;
    QTimer *pQTimer;
    short time;


};
#endif // MAINWINDOW_H
