#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "message.h"

#include <iostream>

MainWindow::MainWindow(QWidget *parent):QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->add_text_window->hide();
    msg = new Message();
}

MainWindow::~MainWindow()
{
    delete msg;
    delete ui;
}

Message* MainWindow::getMessage()
{
    return msg;
}

int MainWindow::getNum()
{
    return packages_num;
}


void MainWindow::on_submit_button_clicked()
{
    QString received_text, received_number;

    received_text = ui->input_text->toPlainText();
    received_number = ui->packages_counter->text();

    msg->setText(received_text.toStdString());
    packages_num = received_number.toInt();

    ui->current_msg->setText(received_text);
    ui->package_counter_display->setText(received_number);
    ui->input_text->clear();

    std::cout << msg->getText() << std::endl;
}

