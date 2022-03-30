#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "message.h"

#include <iostream>

MainWindow::MainWindow(QWidget *parent):QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->add_text_window->hide();
    msg = new Message();
    current_message = new OrderedList<std::string>();
}

MainWindow::~MainWindow()
{
    delete current_message;
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

    std::cout << "Added mesage: " << msg->getText() << std::endl;
}


void MainWindow::on_send_message_button_clicked()
{
    if (!packages_num){
        std::cout << "Could not send the message! No message found!" << std::endl;
    }
    else{
        if (ui->sent->count()) ui->sent->clear();

        current_message = msg->sendMessage(packages_num);
        for(int i=current_message->getSize()-1; i>=0; --i){
            ui->sent->addItem(QString::fromStdString(std::to_string(current_message->getKeys()[i])
                                                     + ". paczka -> "
                                                     + *current_message->getValues()[i]));
        }
    }
}


void MainWindow::on_shuffle_button_clicked()
{
    if (!packages_num){
        std::cout << "Could not shuffle the message! No message found!" << std::endl;
    }
    else{
        if (ui->shuffled->count()) ui->shuffled->clear();

        current_message = msg->shuffle(current_message);
        for(int i=current_message->getSize()-1; i>=0; --i){
            ui->shuffled->addItem(QString::fromStdString(std::to_string(current_message->getKeys()[i])
                                                        + ". paczka -> "
                                                        + *current_message->getValues()[i]));
        }
    }
}


void MainWindow::on_receive_button_clicked()
{
    if (!packages_num){
        std::cout << "Could not receive the message! No message found!" << std::endl;
    }
    else{
        if (ui->received->count()) ui->received->clear();

        current_message = msg->receive(current_message);
        for(int i=current_message->getSize()-1; i>=0; --i){
            ui->received->addItem(QString::fromStdString(std::to_string(current_message->getKeys()[i])
                                                        + ". paczka -> "
                                                        + *current_message->getValues()[i]));
        }
    }
}

