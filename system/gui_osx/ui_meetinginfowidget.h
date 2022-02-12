/********************************************************************************
** Form generated from reading UI file 'meetinginfowidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEETINGINFOWIDGET_H
#define UI_MEETINGINFOWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MeetingInfoWidget
{
public:
    QLineEdit *meeting_name;
    QTimeEdit *start_time;
    QTimeEdit *end_time;
    QLineEdit *meeting_url;
    QLabel *start_label;
    QLabel *end_label;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QTextEdit *textEdit;
    QPushButton *launch_url;

    void setupUi(QWidget *MeetingInfoWidget)
    {
        if (MeetingInfoWidget->objectName().isEmpty())
            MeetingInfoWidget->setObjectName(QString::fromUtf8("MeetingInfoWidget"));
        MeetingInfoWidget->resize(741, 331);
        meeting_name = new QLineEdit(MeetingInfoWidget);
        meeting_name->setObjectName(QString::fromUtf8("meeting_name"));
        meeting_name->setGeometry(QRect(460, 20, 251, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Gill Sans"));
        font.setPointSize(18);
        meeting_name->setFont(font);
        meeting_name->setContextMenuPolicy(Qt::NoContextMenu);
        meeting_name->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"                    background: #505050;\n"
"                    border: 2px solid #303030;\n"
"                    border-bottom-color: #303030; /* same as the pane color */\n"
"                    border-top-left-radius: 3px;\n"
"                    border-top-right-radius: 3px;\n"
"                    min-width: 14.4ex;\n"
"                    padding: 15px;\n"
"                    }\n"
"                "));
        meeting_name->setMaxLength(10);
        meeting_name->setAlignment(Qt::AlignCenter);
        start_time = new QTimeEdit(MeetingInfoWidget);
        start_time->setObjectName(QString::fromUtf8("start_time"));
        start_time->setGeometry(QRect(120, 20, 221, 71));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Gill Sans"));
        font1.setPointSize(24);
        start_time->setFont(font1);
        start_time->setStyleSheet(QString::fromUtf8("QTimeEdit {\n"
"                    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                    stop: 0 #686868, stop: 0.4 #505050,\n"
"                    stop: 0.5 #686868, stop: 1.0 #505050);\n"
"                    border: 2px solid #303030;\n"
"                    border-bottom-color: #303030; /* same as the pane color */\n"
"                    border-top-left-radius: 3px;\n"
"                    border-top-right-radius: 3px;\n"
"                    min-width: 14.4ex;\n"
"                    padding: 5px;\n"
"                    }\n"
"\n"
"\n"
"                    QTimeEdit:up-button {\n"
"\n"
"                    width: 15px;\n"
"\n"
"                    border-left-width: 1px;\n"
"                    border-left-color: darkgray;\n"
"                    border-left-style: solid;\n"
"                    border-top-right-radius: 3px;\n"
"                    border-bottom-right-radius: 3px;\n"
"\n"
"                    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"        "
                        "            stop: 0 #008000, stop: 0.4 #228B22,\n"
"                    stop: 0.5 #008000, stop: 1.0 #228B22);\n"
"                    border: 2px solid #303030;\n"
"                    border-bottom-color: #303030; /* same as the pane color */\n"
"                    border-top-left-radius: 3px;\n"
"                    border-top-right-radius: 3px;\n"
"                    min-width: 14.4ex;\n"
"                    padding: 5px;\n"
"                    }\n"
"\n"
"                    QTimeEdit:down-button {\n"
"\n"
"                    width: 15px;\n"
"\n"
"                    border-left-width: 1px;\n"
"                    border-left-color: darkgray;\n"
"                    border-left-style: solid;\n"
"                    border-top-right-radius: 3px;\n"
"                    border-bottom-right-radius: 3px;\n"
"\n"
"                    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                    stop: 0 #B22222, stop: 0.4 #FF0000,\n"
"                    stop: 0.5 #B22222, stop: 1.0 #FF000"
                        "0);\n"
"                    border: 2px solid #303030;\n"
"                    border-bottom-color: #303030; /* same as the pane color */\n"
"                    border-top-left-radius: 3px;\n"
"                    border-top-right-radius: 3px;\n"
"                    min-width: 14.4ex;\n"
"                    padding: 15px;\n"
"                    }\n"
"\n"
"                    QTimeEdit::down-button:hover {\n"
"                    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                    stop: 0 #484848, stop: 0.4 #585858,\n"
"                    stop: 0.5 #585858, stop: 1.0 #484848);\n"
"                    }\n"
"\n"
"                    QTimeEdit::down-button:hover, QTimeEdit::up-button:hover\n"
"                    {\n"
"                    border-color: rgb(255, 68, 14); /* same as the pane color */\n"
"                    }\n"
"\n"
"                    QTimeEdit::up-button:selected, QTimeEdit::up-button:hover {\n"
"                    background: qlineargradient(x1: 0, y1: 0, x2: 0"
                        ", y2: 1,\n"
"                    stop: 0 #484848, stop: 0.4 #585858,\n"
"                    stop: 0.5 #585858, stop: 1.0 #484848);\n"
"                    }\n"
"\n"
"\n"
"                "));
        start_time->setCalendarPopup(true);
        end_time = new QTimeEdit(MeetingInfoWidget);
        end_time->setObjectName(QString::fromUtf8("end_time"));
        end_time->setGeometry(QRect(120, 140, 221, 71));
        end_time->setFont(font1);
        end_time->setStyleSheet(QString::fromUtf8("QTimeEdit {\n"
"                    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                    stop: 0 #686868, stop: 0.4 #505050,\n"
"                    stop: 0.5 #686868, stop: 1.0 #505050);\n"
"                    border: 2px solid #303030;\n"
"                    border-bottom-color: #303030; /* same as the pane color */\n"
"                    border-top-left-radius: 3px;\n"
"                    border-top-right-radius: 3px;\n"
"                    min-width: 14.4ex;\n"
"                    padding: 5px;\n"
"                    }\n"
"\n"
"\n"
"                    QTimeEdit:up-button {\n"
"\n"
"                    width: 15px;\n"
"\n"
"                    border-left-width: 1px;\n"
"                    border-left-color: darkgray;\n"
"                    border-left-style: solid;\n"
"                    border-top-right-radius: 3px;\n"
"                    border-bottom-right-radius: 3px;\n"
"\n"
"                    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"        "
                        "            stop: 0 #008000, stop: 0.4 #228B22,\n"
"                    stop: 0.5 #008000, stop: 1.0 #228B22);\n"
"                    border: 2px solid #303030;\n"
"                    border-bottom-color: #303030; /* same as the pane color */\n"
"                    border-top-left-radius: 3px;\n"
"                    border-top-right-radius: 3px;\n"
"                    min-width: 14.4ex;\n"
"                    padding: 5px;\n"
"                    }\n"
"\n"
"                    QTimeEdit:down-button {\n"
"\n"
"                    width: 15px;\n"
"\n"
"                    border-left-width: 1px;\n"
"                    border-left-color: darkgray;\n"
"                    border-left-style: solid;\n"
"                    border-top-right-radius: 3px;\n"
"                    border-bottom-right-radius: 3px;\n"
"\n"
"                    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                    stop: 0 #B22222, stop: 0.4 #FF0000,\n"
"                    stop: 0.5 #B22222, stop: 1.0 #FF000"
                        "0);\n"
"                    border: 2px solid #303030;\n"
"                    border-bottom-color: #303030; /* same as the pane color */\n"
"                    border-top-left-radius: 3px;\n"
"                    border-top-right-radius: 3px;\n"
"                    min-width: 14.4ex;\n"
"                    padding: 15px;\n"
"                    }\n"
"\n"
"                    QTimeEdit::down-button:hover {\n"
"                    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                    stop: 0 #484848, stop: 0.4 #585858,\n"
"                    stop: 0.5 #585858, stop: 1.0 #484848);\n"
"                    }\n"
"\n"
"                    QTimeEdit::down-button:hover, QTimeEdit::up-button:hover\n"
"                    {\n"
"                    border-color: rgb(255, 68, 14); /* same as the pane color */\n"
"                    }\n"
"\n"
"                    QTimeEdit::up-button:selected, QTimeEdit::up-button:hover {\n"
"                    background: qlineargradient(x1: 0, y1: 0, x2: 0"
                        ", y2: 1,\n"
"                    stop: 0 #484848, stop: 0.4 #585858,\n"
"                    stop: 0.5 #585858, stop: 1.0 #484848);\n"
"                    }\n"
"\n"
"                    QTimeEdit::up-arraow\n"
"                    {\n"
"                    border : 2px solid black;\n"
"                    background-color : lightgreen;\n"
"                    visable: true;\n"
"                    }\n"
"\n"
"                "));
        end_time->setAlignment(Qt::AlignCenter);
        end_time->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        end_time->setCalendarPopup(true);
        meeting_url = new QLineEdit(MeetingInfoWidget);
        meeting_url->setObjectName(QString::fromUtf8("meeting_url"));
        meeting_url->setGeometry(QRect(30, 230, 541, 81));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Gill Sans"));
        font2.setPointSize(21);
        meeting_url->setFont(font2);
        meeting_url->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"                    background: #505050;\n"
"                    border: 2px solid #303030;\n"
"                    border-bottom-color: #303030; /* same as the pane color */\n"
"                    border-top-left-radius: 3px;\n"
"                    border-top-right-radius: 3px;\n"
"                    min-width: 14.4ex;\n"
"                    padding: 15px;\n"
"                    }\n"
"                "));
        meeting_url->setMaxLength(200);
        meeting_url->setAlignment(Qt::AlignCenter);
        start_label = new QLabel(MeetingInfoWidget);
        start_label->setObjectName(QString::fromUtf8("start_label"));
        start_label->setGeometry(QRect(20, 20, 101, 71));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Gill Sans"));
        font3.setPointSize(20);
        start_label->setFont(font3);
        end_label = new QLabel(MeetingInfoWidget);
        end_label->setObjectName(QString::fromUtf8("end_label"));
        end_label->setGeometry(QRect(30, 140, 91, 71));
        end_label->setFont(font3);
        label = new QLabel(MeetingInfoWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(350, 120, 61, 81));
        label_2 = new QLabel(MeetingInfoWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(350, 170, 60, 41));
        label_3 = new QLabel(MeetingInfoWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(350, 20, 61, 41));
        label_4 = new QLabel(MeetingInfoWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(350, 25, 60, 91));
        textEdit = new QTextEdit(MeetingInfoWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(460, 90, 251, 121));
        textEdit->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"                    background: #505050;\n"
"                    border: 2px solid #303030;\n"
"                    border-bottom-color: #303030; /* same as the pane color */\n"
"                    border-top-left-radius: 3px;\n"
"                    border-top-right-radius: 3px;\n"
"                    min-width: 14.4ex;\n"
"                    padding: 5px;\n"
"                    }\n"
"                "));
        launch_url = new QPushButton(MeetingInfoWidget);
        launch_url->setObjectName(QString::fromUtf8("launch_url"));
        launch_url->setGeometry(QRect(580, 230, 131, 81));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Gill Sans"));
        font4.setPointSize(16);
        launch_url->setFont(font4);
        launch_url->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                    border: 2px solid #696969;\n"
"                    border-radius: 6px;\n"
"                    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                    stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"                    min-width: 80px;\n"
"                    }\n"
"\n"
"                    QPushButton:pressed {\n"
"                    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                    stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"                    }\n"
"\n"
"                    QPushButton:selected, QPushButton:hover {\n"
"                    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                    stop: 0 #484848, stop: 0.4 #585858,\n"
"                    stop: 0.5 #585858, stop: 1.0 #484848);\n"
"                    }\n"
"\n"
"                    QPushButton {\n"
"                    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                    stop: 0 #686868, stop: 0.4 #505050,"
                        "\n"
"                    stop: 0.5 #686868, stop: 1.0 #505050);\n"
"                    border: 2px solid #303030;\n"
"                    border-bottom-color: #303030; /* same as the pane color */\n"
"                    border-top-left-radius: 3px;\n"
"                    border-top-right-radius: 3px;\n"
"                    min-width: 14.4ex;\n"
"                    padding: 7px;\n"
"                    }\n"
"\n"
"                    QPushButton:flat {\n"
"                    border: none; /* no border for a flat push button */\n"
"                    }\n"
"\n"
"                    QPushButton:default {\n"
"                    border-color: navy; /* make the default button prominent */\n"
"                    }\n"
"\n"
"                    QPushButton:selected {\n"
"                    border-color: #FF0000;\n"
"                    border-bottom-color: #FF0000; /* same as pane color */\n"
"                    }\n"
"                "));
        QWidget::setTabOrder(end_time, meeting_url);
        QWidget::setTabOrder(meeting_url, meeting_name);
        QWidget::setTabOrder(meeting_name, start_time);

        retranslateUi(MeetingInfoWidget);

        QMetaObject::connectSlotsByName(MeetingInfoWidget);
    } // setupUi

    void retranslateUi(QWidget *MeetingInfoWidget)
    {
        MeetingInfoWidget->setWindowTitle(QCoreApplication::translate("MeetingInfoWidget", "Form", nullptr));
        meeting_name->setPlaceholderText(QCoreApplication::translate("MeetingInfoWidget", "Name", nullptr));
        end_time->setSpecialValueText(QString());
        meeting_url->setPlaceholderText(QCoreApplication::translate("MeetingInfoWidget", "URL", nullptr));
        start_label->setText(QCoreApplication::translate("MeetingInfoWidget", "Start TIme", nullptr));
        end_label->setText(QCoreApplication::translate("MeetingInfoWidget", "End Time", nullptr));
        label->setText(QCoreApplication::translate("MeetingInfoWidget", "Up", nullptr));
        label_2->setText(QCoreApplication::translate("MeetingInfoWidget", "Down", nullptr));
        label_3->setText(QCoreApplication::translate("MeetingInfoWidget", "Up", nullptr));
        label_4->setText(QCoreApplication::translate("MeetingInfoWidget", "Down", nullptr));
        textEdit->setPlaceholderText(QCoreApplication::translate("MeetingInfoWidget", "Notes", nullptr));
        launch_url->setText(QCoreApplication::translate("MeetingInfoWidget", "Launch URL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MeetingInfoWidget: public Ui_MeetingInfoWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEETINGINFOWIDGET_H
