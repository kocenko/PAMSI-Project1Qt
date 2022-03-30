/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *add_text_window;
    QPushButton *close_add_window;
    QLabel *label_add_text;
    QWidget *layoutWidget;
    QVBoxLayout *whole_menu_layout;
    QPlainTextEdit *input_text;
    QFrame *message_button_menu;
    QHBoxLayout *horizontalLayout;
    QPushButton *submit_button;
    QSpacerItem *menu_spacer;
    QLabel *label_packages_num;
    QSpinBox *packages_counter;
    QPushButton *exit_button;
    QWidget *layoutWidget1;
    QVBoxLayout *three_tables;
    QFrame *message_table_labels;
    QHBoxLayout *message_tables_labels;
    QLabel *sent_table_label;
    QLabel *shuffled_table_label;
    QLabel *received_table_label;
    QFrame *message_tables;
    QHBoxLayout *horizontalLayout_2;
    QListWidget *sent;
    QListWidget *shuffled;
    QListWidget *received;
    QWidget *layoutWidget2;
    QHBoxLayout *message_buttons;
    QPushButton *add_text;
    QPushButton *send_message_button;
    QPushButton *shuffle_button;
    QPushButton *receive_button;
    QLabel *main_close_label;
    QFrame *current_message;
    QHBoxLayout *current_message_layout;
    QLabel *label_current_message;
    QLabel *current_msg;
    QLabel *package_counter_display;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setFocusPolicy(Qt::ClickFocus);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 10, 79);"));
        MainWindow->setDockNestingEnabled(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("color: rgb(32, 74, 135);"));
        add_text_window = new QWidget(centralwidget);
        add_text_window->setObjectName(QString::fromUtf8("add_text_window"));
        add_text_window->setGeometry(QRect(90, 80, 611, 431));
        QPalette palette;
        add_text_window->setPalette(palette);
        add_text_window->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 101, 164);\n"
"background-color: rgb(0, 27, 87);"));
        close_add_window = new QPushButton(add_text_window);
        close_add_window->setObjectName(QString::fromUtf8("close_add_window"));
        close_add_window->setGeometry(QRect(20, 370, 121, 41));
        close_add_window->setStyleSheet(QString::fromUtf8("font: 11pt \"Ubuntu Mono\";\n"
"color: rgb(211, 215, 207);"));
        label_add_text = new QLabel(add_text_window);
        label_add_text->setObjectName(QString::fromUtf8("label_add_text"));
        label_add_text->setGeometry(QRect(10, 10, 591, 61));
        label_add_text->setLayoutDirection(Qt::LeftToRight);
        label_add_text->setStyleSheet(QString::fromUtf8("font: 16pt \"Ubuntu Mono\";\n"
"background-color: rgb(243, 243, 243);"));
        label_add_text->setTextFormat(Qt::RichText);
        label_add_text->setScaledContents(false);
        label_add_text->setAlignment(Qt::AlignCenter);
        label_add_text->setTextInteractionFlags(Qt::NoTextInteraction);
        layoutWidget = new QWidget(add_text_window);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 90, 581, 221));
        whole_menu_layout = new QVBoxLayout(layoutWidget);
        whole_menu_layout->setObjectName(QString::fromUtf8("whole_menu_layout"));
        whole_menu_layout->setContentsMargins(0, 0, 0, 0);
        input_text = new QPlainTextEdit(layoutWidget);
        input_text->setObjectName(QString::fromUtf8("input_text"));
        input_text->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 243)"));

        whole_menu_layout->addWidget(input_text);

        message_button_menu = new QFrame(layoutWidget);
        message_button_menu->setObjectName(QString::fromUtf8("message_button_menu"));
        QPalette palette1;
        QBrush brush(QColor(32, 74, 135, 255));
        brush.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 27, 87, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        message_button_menu->setPalette(palette1);
        horizontalLayout = new QHBoxLayout(message_button_menu);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        submit_button = new QPushButton(message_button_menu);
        submit_button->setObjectName(QString::fromUtf8("submit_button"));
        QPalette palette2;
        QBrush brush2(QColor(211, 215, 207, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        submit_button->setPalette(palette2);
        submit_button->setStyleSheet(QString::fromUtf8("font: 13pt \"Ubuntu Mono\";\n"
"color: rgb(211, 215, 207);"));

        horizontalLayout->addWidget(submit_button);

        menu_spacer = new QSpacerItem(60, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(menu_spacer);

        label_packages_num = new QLabel(message_button_menu);
        label_packages_num->setObjectName(QString::fromUtf8("label_packages_num"));
        label_packages_num->setStyleSheet(QString::fromUtf8("color: rgb(243, 243, 243);"));

        horizontalLayout->addWidget(label_packages_num);

        packages_counter = new QSpinBox(message_button_menu);
        packages_counter->setObjectName(QString::fromUtf8("packages_counter"));
        packages_counter->setStyleSheet(QString::fromUtf8("font: 15pt \"Ubuntu Mono\";\n"
"color: rgb(243, 243, 243);"));
        packages_counter->setAlignment(Qt::AlignCenter);
        packages_counter->setMinimum(1);

        horizontalLayout->addWidget(packages_counter);


        whole_menu_layout->addWidget(message_button_menu);

        exit_button = new QPushButton(centralwidget);
        exit_button->setObjectName(QString::fromUtf8("exit_button"));
        exit_button->setGeometry(QRect(20, 20, 31, 31));
        exit_button->setAutoFillBackground(false);
        exit_button->setStyleSheet(QString::fromUtf8("background-color : rgba(164, 0, 0, 255)"));
        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 140, 781, 351));
        three_tables = new QVBoxLayout(layoutWidget1);
        three_tables->setObjectName(QString::fromUtf8("three_tables"));
        three_tables->setContentsMargins(0, 0, 0, 0);
        message_table_labels = new QFrame(layoutWidget1);
        message_table_labels->setObjectName(QString::fromUtf8("message_table_labels"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(message_table_labels->sizePolicy().hasHeightForWidth());
        message_table_labels->setSizePolicy(sizePolicy1);
        message_table_labels->setMinimumSize(QSize(0, 0));
        message_table_labels->setStyleSheet(QString::fromUtf8(""));
        message_tables_labels = new QHBoxLayout(message_table_labels);
        message_tables_labels->setObjectName(QString::fromUtf8("message_tables_labels"));
        sent_table_label = new QLabel(message_table_labels);
        sent_table_label->setObjectName(QString::fromUtf8("sent_table_label"));
        sent_table_label->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 243);\n"
"font: 13pt \"Ubuntu Mono\";"));
        sent_table_label->setAlignment(Qt::AlignCenter);

        message_tables_labels->addWidget(sent_table_label);

        shuffled_table_label = new QLabel(message_table_labels);
        shuffled_table_label->setObjectName(QString::fromUtf8("shuffled_table_label"));
        shuffled_table_label->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 243);\n"
"font: 13pt \"Ubuntu Mono\";"));
        shuffled_table_label->setAlignment(Qt::AlignCenter);

        message_tables_labels->addWidget(shuffled_table_label);

        received_table_label = new QLabel(message_table_labels);
        received_table_label->setObjectName(QString::fromUtf8("received_table_label"));
        received_table_label->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 243);\n"
"font: 13pt \"Ubuntu Mono\";"));
        received_table_label->setAlignment(Qt::AlignCenter);

        message_tables_labels->addWidget(received_table_label);


        three_tables->addWidget(message_table_labels);

        message_tables = new QFrame(layoutWidget1);
        message_tables->setObjectName(QString::fromUtf8("message_tables"));
        horizontalLayout_2 = new QHBoxLayout(message_tables);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        sent = new QListWidget(message_tables);
        sent->setObjectName(QString::fromUtf8("sent"));
        sent->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 243);"));

        horizontalLayout_2->addWidget(sent);

        shuffled = new QListWidget(message_tables);
        shuffled->setObjectName(QString::fromUtf8("shuffled"));
        shuffled->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 243);"));

        horizontalLayout_2->addWidget(shuffled);

        received = new QListWidget(message_tables);
        received->setObjectName(QString::fromUtf8("received"));
        received->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 243);"));

        horizontalLayout_2->addWidget(received);


        three_tables->addWidget(message_tables);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 520, 751, 71));
        message_buttons = new QHBoxLayout(layoutWidget2);
        message_buttons->setObjectName(QString::fromUtf8("message_buttons"));
        message_buttons->setContentsMargins(0, 0, 0, 0);
        add_text = new QPushButton(layoutWidget2);
        add_text->setObjectName(QString::fromUtf8("add_text"));
        add_text->setStyleSheet(QString::fromUtf8("font: 13pt \"Ubuntu Mono\";\n"
"background-color: rgb(243, 243, 243);"));

        message_buttons->addWidget(add_text);

        send_message_button = new QPushButton(layoutWidget2);
        send_message_button->setObjectName(QString::fromUtf8("send_message_button"));
        send_message_button->setStyleSheet(QString::fromUtf8("font: 13pt \"Ubuntu Mono\";\n"
"background-color: rgb(243, 243, 243);"));

        message_buttons->addWidget(send_message_button);

        shuffle_button = new QPushButton(layoutWidget2);
        shuffle_button->setObjectName(QString::fromUtf8("shuffle_button"));
        shuffle_button->setStyleSheet(QString::fromUtf8("font: 13pt \"Ubuntu Mono\";\n"
"background-color: rgb(243, 243, 243);"));

        message_buttons->addWidget(shuffle_button);

        receive_button = new QPushButton(layoutWidget2);
        receive_button->setObjectName(QString::fromUtf8("receive_button"));
        receive_button->setStyleSheet(QString::fromUtf8("font: 13pt \"Ubuntu Mono\";\n"
"background-color: rgb(243, 243, 243);"));

        message_buttons->addWidget(receive_button);

        main_close_label = new QLabel(centralwidget);
        main_close_label->setObjectName(QString::fromUtf8("main_close_label"));
        main_close_label->setGeometry(QRect(60, 20, 61, 31));
        main_close_label->setStyleSheet(QString::fromUtf8("border-color: rgb(243, 243, 243);\n"
"color: rgb(239, 41, 41);\n"
"font: 11pt \"Ubuntu Mono\";"));
        main_close_label->setAlignment(Qt::AlignCenter);
        current_message = new QFrame(centralwidget);
        current_message->setObjectName(QString::fromUtf8("current_message"));
        current_message->setGeometry(QRect(330, 20, 371, 41));
        current_message->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 243)"));
        current_message_layout = new QHBoxLayout(current_message);
        current_message_layout->setObjectName(QString::fromUtf8("current_message_layout"));
        label_current_message = new QLabel(current_message);
        label_current_message->setObjectName(QString::fromUtf8("label_current_message"));
        label_current_message->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 243);\n"
"font: 13pt \"Ubuntu Mono\";"));
        label_current_message->setAlignment(Qt::AlignCenter);

        current_message_layout->addWidget(label_current_message);

        current_msg = new QLabel(current_message);
        current_msg->setObjectName(QString::fromUtf8("current_msg"));
        current_msg->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 243);\n"
"font: 14pt \"Ubuntu Mono\";"));

        current_message_layout->addWidget(current_msg);

        package_counter_display = new QLabel(centralwidget);
        package_counter_display->setObjectName(QString::fromUtf8("package_counter_display"));
        package_counter_display->setGeometry(QRect(706, 20, 51, 41));
        package_counter_display->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 243)"));
        package_counter_display->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        layoutWidget->raise();
        layoutWidget->raise();
        exit_button->raise();
        add_text_window->raise();
        main_close_label->raise();

        retranslateUi(MainWindow);
        QObject::connect(add_text, SIGNAL(clicked()), add_text_window, SLOT(show()));
        QObject::connect(close_add_window, SIGNAL(clicked()), add_text_window, SLOT(hide()));
        QObject::connect(exit_button, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "JanDoAni", nullptr));
        close_add_window->setText(QCoreApplication::translate("MainWindow", "Zamknij okno", nullptr));
        label_add_text->setText(QCoreApplication::translate("MainWindow", "Dodaj tekst wiadomo\305\233ci, jak\304\205 chce wys\305\202a\304\207 Jan", nullptr));
        submit_button->setText(QCoreApplication::translate("MainWindow", "Zatwierd\305\272", nullptr));
        label_packages_num->setText(QCoreApplication::translate("MainWindow", "Ilo\305\233\304\207 paczek:", nullptr));
        exit_button->setText(QString());
#if QT_CONFIG(shortcut)
        exit_button->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
        sent_table_label->setText(QCoreApplication::translate("MainWindow", "Wys\305\202ano", nullptr));
        shuffled_table_label->setText(QCoreApplication::translate("MainWindow", "W trakcie przesy\305\202ania", nullptr));
        received_table_label->setText(QCoreApplication::translate("MainWindow", "Otrzymano", nullptr));
        add_text->setText(QCoreApplication::translate("MainWindow", "Dodaj tekst", nullptr));
        send_message_button->setText(QCoreApplication::translate("MainWindow", "Wy\305\233lij wiadomo\305\233\304\207", nullptr));
        shuffle_button->setText(QCoreApplication::translate("MainWindow", "Poczekaj, a\305\274 dotrze", nullptr));
        receive_button->setText(QCoreApplication::translate("MainWindow", "Odbierz wiadomo\305\233\304\207", nullptr));
        main_close_label->setText(QCoreApplication::translate("MainWindow", "Zamknij", nullptr));
        label_current_message->setText(QCoreApplication::translate("MainWindow", "Bie\305\274\304\205ca wiadomo\305\233\304\207:", nullptr));
        current_msg->setText(QString());
        package_counter_display->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
