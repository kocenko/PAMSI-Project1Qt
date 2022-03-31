#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidget>
#include "message.h"
#include "orderedList.h"

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

    void on_send_message_button_clicked();

    void on_shuffle_button_clicked();

    void on_receive_button_clicked();

    void display_lines(QListWidget* table, OrderedList<std::string>* line, int index);

private:
    Ui::MainWindow *ui;
    Message* msg;
    OrderedList<std::string>* current_message;
    int packages_num;
};

#endif // MAINWINDOW_H
