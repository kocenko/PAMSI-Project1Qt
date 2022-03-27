#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "message.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    Message* getMessage();
    int getNum();
    ~MainWindow();

private slots:
    void on_submit_button_clicked();

private:
    Ui::MainWindow *ui;
    Message* msg;
    int packages_num;
};

#endif // MAINWINDOW_H
