/********************************************************************************
** Form generated from reading UI file 'zoomer.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZOOMER_H
#define UI_ZOOMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ZOOMer
{
public:
    QWidget *centralwidget;
    QTabWidget *WeekDay_Tabs;
    QWidget *Home_t;
    QWidget *widget;
    QFrame *repeater_w;
    QComboBox *weekdays_7;
    QFrame *monday_f;
    QCheckBox *checkBox_mon;
    QFrame *tuseday_f;
    QCheckBox *checkBox_tue;
    QFrame *thursday_f;
    QCheckBox *checkBox_thrus;
    QFrame *friday_f;
    QCheckBox *checkBox_fri;
    QFrame *saturday_f;
    QCheckBox *checkBox_sat;
    QFrame *sunday_f;
    QCheckBox *checkBox_sun;
    QLabel *label_2;
    QFrame *wednesday_f;
    QCheckBox *checkBox_weds;
    QListView *meeting_list;
    QPushButton *program_runner;
    QPushButton *sound_b;
    QLabel *list_label;
    QWidget *Monday_t;
    QStackedWidget *monday_stacked_1;
    QPushButton *m_new_button_1;
    QPushButton *m_next_button_1;
    QPushButton *m_prev_button_1;
    QPushButton *m_delete_button_1;
    QWidget *Tuesday_t;
    QStackedWidget *tuesday_stacked_2;
    QPushButton *m_new_button_2;
    QPushButton *m_next_button_2;
    QPushButton *m_prev_button_2;
    QPushButton *m_delete_button_2;
    QWidget *Wednesday_t;
    QPushButton *m_prev_button_3;
    QPushButton *m_next_button_3;
    QPushButton *m_new_button_3;
    QPushButton *m_delete_button_3;
    QStackedWidget *wednesday_stacked_3;
    QWidget *Thursday_t;
    QPushButton *m_prev_button_4;
    QPushButton *m_next_button_4;
    QPushButton *m_new_button_4;
    QPushButton *m_delete_button_4;
    QStackedWidget *thursday_stacked_4;
    QWidget *Friday_t;
    QPushButton *m_prev_button_5;
    QPushButton *m_next_button_5;
    QPushButton *m_new_button_5;
    QPushButton *m_delete_button_5;
    QStackedWidget *friday_stacked_5;
    QWidget *Saturday_t;
    QPushButton *m_prev_button_6;
    QPushButton *m_next_button_6;
    QPushButton *m_new_button_6;
    QPushButton *m_delete_button_6;
    QStackedWidget *saturday_stacked_6;
    QWidget *Sunday_t;
    QPushButton *m_prev_button_0;
    QPushButton *m_next_button_0;
    QPushButton *m_new_button_0;
    QPushButton *m_delete_button_0;
    QStackedWidget *sunday_stacked_0;
    QLabel *App_Title;

    void setupUi(QMainWindow *ZOOMer)
    {
        if (ZOOMer->objectName().isEmpty())
            ZOOMer->setObjectName(QString::fromUtf8("ZOOMer"));
        ZOOMer->resize(1077, 650);
        ZOOMer->setMinimumSize(QSize(1077, 650));
        ZOOMer->setMaximumSize(QSize(1077, 650));
        ZOOMer->setLayoutDirection(Qt::LeftToRight);
        ZOOMer->setAutoFillBackground(false);
        ZOOMer->setStyleSheet(QString::fromUtf8("QWidget#ZOOMer {\n"
"                background: grey;\n"
"                width: 10px; /* when vertical */\n"
"                height: 10px; /* when horizontal */\n"
"                }\n"
"\n"
"                QMainWindow::separator:hover {\n"
"                background: red;\n"
"                }\n"
"            "));
        centralwidget = new QWidget(ZOOMer);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        WeekDay_Tabs = new QTabWidget(centralwidget);
        WeekDay_Tabs->setObjectName(QString::fromUtf8("WeekDay_Tabs"));
        WeekDay_Tabs->setGeometry(QRect(0, 200, 1121, 501));
        QFont font;
        font.setFamily(QString::fromUtf8("Gill Sans"));
        font.setPointSize(18);
        WeekDay_Tabs->setFont(font);
        WeekDay_Tabs->setAutoFillBackground(false);
        WeekDay_Tabs->setStyleSheet(QString::fromUtf8("QTabWidget::pane { /* The tab widget frame */\n"
"                        border-top: 2px solid #505050;\n"
"                        }\n"
"\n"
"                        #QTabWidget {\n"
"                        background:rgb(85, 86, 86);\n"
"                        }\n"
"\n"
"\n"
"                        QTabWidget::tab-bar {\n"
"                        left: 5px; /* move to the right by 5px */\n"
"                        }\n"
"\n"
"\n"
"                        /* Style the tab using the tab sub-control. Note that\n"
"                        it reads QTabBar _not_ QTabWidget */\n"
"                        QTabBar::tab {\n"
"                        background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                        stop: 0 #686868, stop: 0.4 #505050,\n"
"                        stop: 0.5 #686868, stop: 1.0 #505050);\n"
"                        border: 2px solid #303030;\n"
"                        border-bottom-color: #303030; /* same as the pane color */\n"
"                        border-top-l"
                        "eft-radius: 3px;\n"
"                        border-top-right-radius: 3px;\n"
"                        min-width: 14.4ex;\n"
"                        padding: 15px;\n"
"                        }\n"
"\n"
"\n"
"                        QTabBar::tab:selected, QTabBar::tab:hover {\n"
"                        background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                        stop: 0 #484848, stop: 0.4 #585858,\n"
"                        stop: 0.5 #585858, stop: 1.0 #484848);\n"
"                        }\n"
"\n"
"\n"
"                        QTabBar::tab:selected {\n"
"                        border-color: #FF0000;\n"
"                        border-bottom-color: #FF0000; /* same as pane color */\n"
"                        }\n"
"\n"
"\n"
"                        QTabBar::tab:!selected {\n"
"                        margin-top: 4px; /* make non-selected tabs look smaller */\n"
"                        }\n"
"\n"
"\n"
"                        /* make use of negative margins for overlapping tabs */\n"
""
                        "                        QTabBar::tab:selected {\n"
"                        /* expand/overlap to the left and right by 4px */\n"
"                        margin-left: -6px;\n"
"                        margin-right: -6px;\n"
"                        }\n"
"\n"
"\n"
"                        QTabBar::tab:first:selected {\n"
"                        margin-left: 0; /* the first selected tab has nothing to overlap with on the left */\n"
"                        }\n"
"\n"
"\n"
"                        QTabBar::tab:last:selected {\n"
"                        margin-right: 0; /* the last selected tab has nothing to overlap with on the right */\n"
"                        }\n"
"\n"
"\n"
"                        QTabBar::tab:only-one {\n"
"                        margin: 0; /* if there is only one tab, we don't want overlapping margins */\n"
"                        }\n"
"                    "));
        Home_t = new QWidget();
        Home_t->setObjectName(QString::fromUtf8("Home_t"));
        Home_t->setAutoFillBackground(false);
        widget = new QWidget(Home_t);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 1103, 422));
        widget->setLayoutDirection(Qt::LeftToRight);
        widget->setAutoFillBackground(true);
        repeater_w = new QFrame(widget);
        repeater_w->setObjectName(QString::fromUtf8("repeater_w"));
        repeater_w->setGeometry(QRect(540, 130, 501, 221));
        repeater_w->setAutoFillBackground(false);
        repeater_w->setStyleSheet(QString::fromUtf8("QFrame {\n"
"								border: 3px solid rgb(85, 86, 86);;\n"
"                                    border-radius: 6px;\n"
"                                    background-color: rgb(139, 141, 141);\n"
"                                    min-width: 80px;\n"
"                                    }\n"
"                                "));
        repeater_w->setFrameShape(QFrame::StyledPanel);
        repeater_w->setFrameShadow(QFrame::Raised);
        weekdays_7 = new QComboBox(repeater_w);
        weekdays_7->addItem(QString());
        weekdays_7->addItem(QString());
        weekdays_7->addItem(QString());
        weekdays_7->addItem(QString());
        weekdays_7->addItem(QString());
        weekdays_7->addItem(QString());
        weekdays_7->addItem(QString());
        weekdays_7->addItem(QString());
        weekdays_7->addItem(QString());
        weekdays_7->setObjectName(QString::fromUtf8("weekdays_7"));
        weekdays_7->setGeometry(QRect(180, 20, 141, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Gill Sans"));
        font1.setPointSize(17);
        weekdays_7->setFont(font1);
        weekdays_7->setLayoutDirection(Qt::LeftToRight);
        weekdays_7->setAutoFillBackground(false);
        weekdays_7->setStyleSheet(QString::fromUtf8("QComboBox\n"
"                                        {\n"
"                                        subcontrol-origin: padding;\n"
"                                        subcontrol-position: top right;\n"
"                                        selection-background-color: #111;\n"
"                                        selection-color: yellow;\n"
"                                        color: white;\n"
"                                        background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #565656,\n"
"                                        stop: 0.1 #525252, stop: 0.5 #4e4e4e, stop: 0.9 #4a4a4a, stop: 1 #464646);\n"
"                                        border-style: solid;\n"
"                                        border: 1px solid #1e1e1e;\n"
"                                        border-radius: 5;\n"
"                                        padding: 1px 0px 1px 20px;\n"
"                                        }\n"
"\n"
"\n"
"                                        QCom"
                        "boBox:hover, QPushButton:hover\n"
"                                        {\n"
"                                        border: 1px solid red;\n"
"                                        color: white;\n"
"                                        }\n"
"\n"
"                                        QComboBox:editable {\n"
"                                        background: red;\n"
"                                        color: pink;\n"
"                                        }\n"
"\n"
"                                        QComboBox:on\n"
"                                        {\n"
"                                        padding-top: 0px;\n"
"                                        padding-left: 0px;\n"
"                                        color: white;\n"
"                                        background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d,\n"
"                                        stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"     "
                        "                                   selection-background-color: #ffaa00;\n"
"                                        }\n"
"\n"
"                                        QComboBox:!on\n"
"                                        {\n"
"                                        color: white;\n"
"                                        background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #666,\n"
"                                        stop: 0.1 #555, stop: 0.5 #555, stop: 0.9 #444, stop: 1 #333);\n"
"                                        }\n"
"\n"
"                                        QComboBox QAbstractItemView\n"
"                                        {\n"
"                                        border: 2px solid darkgray;\n"
"                                        color: black;\n"
"                                        selection-background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0\n"
"                                        #111, stop: 1 #333);\n"
"                   "
                        "                     }\n"
"\n"
"                                        QComboBox::drop-down\n"
"                                        {\n"
"                                        subcontrol-origin: padding;\n"
"                                        subcontrol-position: top right;\n"
"                                        width: 15px;\n"
"                                        color: white;\n"
"                                        border-left-width: 0px;\n"
"                                        border-left-color: darkgray;\n"
"                                        border-left-style: solid; /* just a single line */\n"
"                                        border-top-right-radius: 3px; /* same radius as the QComboBox */\n"
"                                        border-bottom-right-radius: 3px;\n"
"                                        padding-left: 10px;\n"
"                                        }\n"
"\n"
"                                        QComboBox::down-arrow, QSpinBox::down-arro"
                        "w, QTimeEdit::down-arrow,\n"
"                                        QDateEdit::down-arrow\n"
"                                        {\n"
"                                        image: url(:/icons/down_arrow.png);\n"
"                                        width: 7px;\n"
"                                        height: 5px;\n"
"                                        }\n"
"                                    "));
        monday_f = new QFrame(repeater_w);
        monday_f->setObjectName(QString::fromUtf8("monday_f"));
        monday_f->setGeometry(QRect(20, 20, 141, 41));
        monday_f->setStyleSheet(QString::fromUtf8("QFrame {\n"
"                                        background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #565656,\n"
"                                        stop: 0.1 #525252, stop: 0.5 #4e4e4e, stop: 0.9 #4a4a4a, stop: 1 #464646);\n"
"                                        }\n"
"                                    "));
        monday_f->setFrameShape(QFrame::StyledPanel);
        monday_f->setFrameShadow(QFrame::Raised);
        checkBox_mon = new QCheckBox(monday_f);
        checkBox_mon->setObjectName(QString::fromUtf8("checkBox_mon"));
        checkBox_mon->setGeometry(QRect(20, 10, 81, 22));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Gill Sans"));
        font2.setPointSize(15);
        checkBox_mon->setFont(font2);
        tuseday_f = new QFrame(repeater_w);
        tuseday_f->setObjectName(QString::fromUtf8("tuseday_f"));
        tuseday_f->setGeometry(QRect(340, 20, 141, 41));
        tuseday_f->setStyleSheet(QString::fromUtf8("QFrame {\n"
"                                        background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #565656,\n"
"                                        stop: 0.1 #525252, stop: 0.5 #4e4e4e, stop: 0.9 #4a4a4a, stop: 1 #464646);\n"
"                                        }\n"
"                                    "));
        tuseday_f->setFrameShape(QFrame::StyledPanel);
        tuseday_f->setFrameShadow(QFrame::Raised);
        checkBox_tue = new QCheckBox(tuseday_f);
        checkBox_tue->setObjectName(QString::fromUtf8("checkBox_tue"));
        checkBox_tue->setGeometry(QRect(20, 10, 86, 22));
        checkBox_tue->setFont(font2);
        thursday_f = new QFrame(repeater_w);
        thursday_f->setObjectName(QString::fromUtf8("thursday_f"));
        thursday_f->setGeometry(QRect(180, 90, 141, 41));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Gill Sans"));
        thursday_f->setFont(font3);
        thursday_f->setStyleSheet(QString::fromUtf8("QFrame {\n"
"                                        background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #565656,\n"
"                                        stop: 0.1 #525252, stop: 0.5 #4e4e4e, stop: 0.9 #4a4a4a, stop: 1 #464646);\n"
"                                        }\n"
"                                    "));
        thursday_f->setFrameShape(QFrame::StyledPanel);
        thursday_f->setFrameShadow(QFrame::Raised);
        checkBox_thrus = new QCheckBox(thursday_f);
        checkBox_thrus->setObjectName(QString::fromUtf8("checkBox_thrus"));
        checkBox_thrus->setGeometry(QRect(20, 10, 91, 20));
        checkBox_thrus->setFont(font2);
        friday_f = new QFrame(repeater_w);
        friday_f->setObjectName(QString::fromUtf8("friday_f"));
        friday_f->setGeometry(QRect(340, 90, 141, 41));
        friday_f->setStyleSheet(QString::fromUtf8("QFrame {\n"
"                                        background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #565656,\n"
"                                        stop: 0.1 #525252, stop: 0.5 #4e4e4e, stop: 0.9 #4a4a4a, stop: 1 #464646);\n"
"                                        }\n"
"                                    "));
        friday_f->setFrameShape(QFrame::StyledPanel);
        friday_f->setFrameShadow(QFrame::Raised);
        checkBox_fri = new QCheckBox(friday_f);
        checkBox_fri->setObjectName(QString::fromUtf8("checkBox_fri"));
        checkBox_fri->setGeometry(QRect(20, 10, 86, 22));
        checkBox_fri->setFont(font2);
        saturday_f = new QFrame(repeater_w);
        saturday_f->setObjectName(QString::fromUtf8("saturday_f"));
        saturday_f->setGeometry(QRect(20, 160, 141, 41));
        QFont font4;
        font4.setPointSize(15);
        saturday_f->setFont(font4);
        saturday_f->setStyleSheet(QString::fromUtf8("QFrame {\n"
"                                        background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #565656,\n"
"                                        stop: 0.1 #525252, stop: 0.5 #4e4e4e, stop: 0.9 #4a4a4a, stop: 1 #464646);\n"
"                                        }\n"
"                                    "));
        saturday_f->setFrameShape(QFrame::StyledPanel);
        saturday_f->setFrameShadow(QFrame::Raised);
        checkBox_sat = new QCheckBox(saturday_f);
        checkBox_sat->setObjectName(QString::fromUtf8("checkBox_sat"));
        checkBox_sat->setGeometry(QRect(20, 10, 81, 22));
        checkBox_sat->setFont(font2);
        sunday_f = new QFrame(repeater_w);
        sunday_f->setObjectName(QString::fromUtf8("sunday_f"));
        sunday_f->setGeometry(QRect(340, 160, 141, 41));
        sunday_f->setStyleSheet(QString::fromUtf8("QFrame {\n"
"                                        background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #565656,\n"
"                                        stop: 0.1 #525252, stop: 0.5 #4e4e4e, stop: 0.9 #4a4a4a, stop: 1 #464646);\n"
"                                        }\n"
"                                    "));
        sunday_f->setFrameShape(QFrame::StyledPanel);
        sunday_f->setFrameShadow(QFrame::Raised);
        checkBox_sun = new QCheckBox(sunday_f);
        checkBox_sun->setObjectName(QString::fromUtf8("checkBox_sun"));
        checkBox_sun->setGeometry(QRect(20, 10, 86, 22));
        checkBox_sun->setFont(font2);
        label_2 = new QLabel(repeater_w);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(180, 160, 141, 41));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Gill Sans"));
        font5.setPointSize(19);
        label_2->setFont(font5);
        label_2->setStyleSheet(QString::fromUtf8("QFrame {\n"
"                                        background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #565656,\n"
"                                        stop: 0.1 #525252, stop: 0.5 #4e4e4e, stop: 0.9 #4a4a4a, stop: 1 #464646);\n"
"                                        }\n"
"                                    "));
        wednesday_f = new QFrame(repeater_w);
        wednesday_f->setObjectName(QString::fromUtf8("wednesday_f"));
        wednesday_f->setGeometry(QRect(20, 90, 141, 41));
        wednesday_f->setStyleSheet(QString::fromUtf8("QFrame {\n"
"                                        background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #565656,\n"
"                                        stop: 0.1 #525252, stop: 0.5 #4e4e4e, stop: 0.9 #4a4a4a, stop: 1 #464646);\n"
"                                        }\n"
"                                    "));
        wednesday_f->setFrameShape(QFrame::StyledPanel);
        wednesday_f->setFrameShadow(QFrame::Raised);
        checkBox_weds = new QCheckBox(wednesday_f);
        checkBox_weds->setObjectName(QString::fromUtf8("checkBox_weds"));
        checkBox_weds->setGeometry(QRect(20, 10, 101, 22));
        checkBox_weds->setFont(font2);
        meeting_list = new QListView(widget);
        meeting_list->setObjectName(QString::fromUtf8("meeting_list"));
        meeting_list->setGeometry(QRect(30, 30, 481, 321));
        meeting_list->setFont(font);
        meeting_list->setAutoFillBackground(false);
        meeting_list->setStyleSheet(QString::fromUtf8("QListView {\n"
"    show-decoration-selected: 1; /* make the selection span the entire width of the view */\n"
"    background-color: rgb(139, 141, 141);\n"
"    border-radius: 3px;\n"
"    border: 3px solid rgb(85, 86, 86);;\n"
"}\n"
"QListView::item {\n"
"           background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #565656,\n"
"                                        stop: 0.1 #525252, stop: 0.5 #4e4e4e, stop: 0.9 #4a4a4a, stop: 1 #464646);\n"
"    border: 2px solid #303030;\n"
"    border-bottom-color: #303030; /* same as the pane color */\n"
"    border-top-left-radius: 3px;\n"
"    border-top-right-radius: 3px;\n"
"    min-width: 14.4ex;\n"
"    padding: 15px;\n"
"    border-radius: 6px;\n"
"}"));
        meeting_list->setEditTriggers(QAbstractItemView::NoEditTriggers);
        meeting_list->setProperty("showDropIndicator", QVariant(true));
        program_runner = new QPushButton(widget);
        program_runner->setObjectName(QString::fromUtf8("program_runner"));
        program_runner->setGeometry(QRect(540, 30, 281, 71));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Gill Sans"));
        font6.setPointSize(20);
        program_runner->setFont(font6);
        program_runner->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                                    border: 2px solid #8f8f91;\n"
"                                    border-radius: 6px;\n"
"                                    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                    stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"                                    min-width: 80px;\n"
"                                    }\n"
"\n"
"\n"
"                                    QPushButton:pressed {\n"
"                                    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                    stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"                                    }\n"
"\n"
"\n"
"                                    QPushButton:selected, QPushButton:hover {\n"
"                                    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                    stop: 0 #008000, stop: 0.4 #228B22,\n"
"                                    stop: 0.5 #00"
                        "8000, stop: 1.0 #228B22);\n"
"                                    }\n"
"\n"
"\n"
"                                    QPushButton {\n"
"                                    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                    stop: 0 #686868, stop: 0.4 #505050,\n"
"                                    stop: 0.5 #686868, stop: 1.0 #505050);\n"
"                                    border: 2px solid #303030;\n"
"                                    border-bottom-color: #303030; /* same as the pane color */\n"
"                                    border-top-left-radius: 3px;\n"
"                                    border-top-right-radius: 3px;\n"
"                                    min-width: 14.4ex;\n"
"                                    padding: 7px;\n"
"                                    }\n"
"\n"
"\n"
"                                    QPushButton:flat {\n"
"                                    border: none; /* no border for a flat push button */\n"
"                "
                        "                    }\n"
"\n"
"\n"
"                                    QPushButton:default {\n"
"                                    border-color: navy; /* make the default button prominent */\n"
"                                    }\n"
"\n"
"\n"
"                                    QPushButton:selected {\n"
"                                    border-color: #FF0000;\n"
"                                    border-bottom-color: #FF0000; /* same as pane color */\n"
"                                    }\n"
"                                "));
        sound_b = new QPushButton(widget);
        sound_b->setObjectName(QString::fromUtf8("sound_b"));
        sound_b->setGeometry(QRect(850, 30, 181, 71));
        sound_b->setFont(font6);
        sound_b->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                                    border: 2px solid #8f8f91;\n"
"                                    border-radius: 6px;\n"
"                                    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                    stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"                                    min-width: 80px;\n"
"                                    }\n"
"\n"
"\n"
"                                    QPushButton:pressed {\n"
"                                    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                    stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"                                    }\n"
"\n"
"\n"
"                                    QPushButton:selected, QPushButton:hover {\n"
"                                    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                    stop: 0 #008000, stop: 0.4 #228B22,\n"
"                                    stop: 0.5 #00"
                        "8000, stop: 1.0 #228B22);\n"
"                                    }\n"
"\n"
"\n"
"                                    QPushButton {\n"
"                                    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                    stop: 0 #686868, stop: 0.4 #505050,\n"
"                                    stop: 0.5 #686868, stop: 1.0 #505050);\n"
"                                    border: 2px solid #303030;\n"
"                                    border-bottom-color: #303030; /* same as the pane color */\n"
"                                    border-top-left-radius: 3px;\n"
"                                    border-top-right-radius: 3px;\n"
"                                    min-width: 14.4ex;\n"
"                                    padding: 7px;\n"
"                                    }\n"
"\n"
"\n"
"                                    QPushButton:flat {\n"
"                                    border: none; /* no border for a flat push button */\n"
"                "
                        "                    }\n"
"\n"
"\n"
"                                    QPushButton:default {\n"
"                                    border-color: navy; /* make the default button prominent */\n"
"                                    }\n"
"\n"
"\n"
"                                    QPushButton:selected {\n"
"                                    border-color: #FF0000;\n"
"                                    border-bottom-color: #FF0000; /* same as pane color */\n"
"                                    }\n"
"                                "));
        sound_b->setCheckable(false);
        list_label = new QLabel(widget);
        list_label->setObjectName(QString::fromUtf8("list_label"));
        list_label->setGeometry(QRect(30, 40, 481, 291));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Gill Sans"));
        font7.setPointSize(45);
        list_label->setFont(font7);
        list_label->setLayoutDirection(Qt::RightToLeft);
        list_label->setAlignment(Qt::AlignCenter);
        WeekDay_Tabs->addTab(Home_t, QString());
        Monday_t = new QWidget();
        Monday_t->setObjectName(QString::fromUtf8("Monday_t"));
        Monday_t->setAutoFillBackground(true);
        monday_stacked_1 = new QStackedWidget(Monday_t);
        monday_stacked_1->setObjectName(QString::fromUtf8("monday_stacked_1"));
        monday_stacked_1->setGeometry(QRect(30, 30, 741, 331));
        monday_stacked_1->setAutoFillBackground(false);
        monday_stacked_1->setStyleSheet(QString::fromUtf8("QStackedWidget {\n"
"                                border: 3px solid rgb(25, 26, 26);\n"
"                                background: rgb(139, 141, 141);\n"
"                                }\n"
"\n"
"                                #page1 {\n"
"                                background-color: blue;\n"
"                                }\n"
"                                #page2 {\n"
"                                background-color: red;\n"
"                                }\n"
"                            "));
        m_new_button_1 = new QPushButton(Monday_t);
        m_new_button_1->setObjectName(QString::fromUtf8("m_new_button_1"));
        m_new_button_1->setGeometry(QRect(790, 220, 131, 111));
        m_new_button_1->setFont(font6);
        m_new_button_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                                border: 2px solid #8f8f91;\n"
"                                border-radius: 6px;\n"
"                                background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"                                min-width: 80px;\n"
"                                }\n"
"\n"
"                                QPushButton:pressed {\n"
"                                background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"                                }\n"
"\n"
"                                QPushButton:selected, QPushButton:hover {\n"
"                                background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #484848, stop: 0.4 #585858,\n"
"                                stop: 0.5 #585858, stop: 1.0 #484848);\n"
"                                }\n"
""
                        "\n"
"                                QPushButton {\n"
"                                background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #686868, stop: 0.4 #505050,\n"
"                                stop: 0.5 #686868, stop: 1.0 #505050);\n"
"                                border: 2px solid #303030;\n"
"                                border-bottom-color: #303030; /* same as the pane color */\n"
"                                border-top-left-radius: 3px;\n"
"                                border-top-right-radius: 3px;\n"
"                                min-width: 14.4ex;\n"
"                                padding: 3px;\n"
"                                }\n"
"\n"
"                                QPushButton:flat {\n"
"                                border: #FF0000; /* no border for a flat push button */\n"
"                                }\n"
"\n"
"                                QPushButton:default {\n"
"                                border-color: "
                        "navy; /* make the default button prominent */\n"
"                                }\n"
"\n"
"\n"
"                            "));
        m_next_button_1 = new QPushButton(Monday_t);
        m_next_button_1->setObjectName(QString::fromUtf8("m_next_button_1"));
        m_next_button_1->setGeometry(QRect(930, 60, 131, 111));
        QFont font8;
        font8.setFamily(QString::fromUtf8("Gill Sans"));
        font8.setPointSize(20);
        font8.setStrikeOut(false);
        m_next_button_1->setFont(font8);
        m_next_button_1->setMouseTracking(false);
        m_next_button_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                                border: 2px solid #8f8f91;\n"
"                                border-radius: 6px;\n"
"                                background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"                                min-width: 80px;\n"
"                                }\n"
"\n"
"                                QPushButton:pressed {\n"
"                                background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"                                }\n"
"\n"
"                                QPushButton:selected, QPushButton:hover {\n"
"                                background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #484848, stop: 0.4 #585858,\n"
"                                stop: 0.5 #585858, stop: 1.0 #484848);\n"
"                                }\n"
""
                        "\n"
"                                QPushButton {\n"
"                                background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #686868, stop: 0.4 #505050,\n"
"                                stop: 0.5 #686868, stop: 1.0 #505050);\n"
"                                border: 2px solid #303030;\n"
"                                border-bottom-color: #303030; /* same as the pane color */\n"
"                                border-top-left-radius: 3px;\n"
"                                border-top-right-radius: 3px;\n"
"                                min-width: 14.4ex;\n"
"                                padding: 7px;\n"
"                                }\n"
"\n"
"                                QPushButton:flat {\n"
"                                border: none; /* no border for a flat push button */\n"
"                                }\n"
"\n"
"                                QPushButton:default {\n"
"                                border-color: nav"
                        "y; /* make the default button prominent */\n"
"                                }\n"
"\n"
"                                QPushButton:selected {\n"
"                                border-color: #FF0000;\n"
"                                border-bottom-color: #FF0000; /* same as pane color */\n"
"                                }\n"
"                            "));
        m_prev_button_1 = new QPushButton(Monday_t);
        m_prev_button_1->setObjectName(QString::fromUtf8("m_prev_button_1"));
        m_prev_button_1->setGeometry(QRect(790, 60, 131, 111));
        m_prev_button_1->setFont(font6);
        m_prev_button_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                                border: 2px solid #696969;\n"
"                                border-radius: 6px;\n"
"                                background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"                                min-width: 80px;\n"
"                                }\n"
"\n"
"                                QPushButton:pressed {\n"
"                                background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"                                }\n"
"\n"
"                                QPushButton:selected, QPushButton:hover {\n"
"                                background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #484848, stop: 0.4 #585858,\n"
"                                stop: 0.5 #585858, stop: 1.0 #484848);\n"
"                                }\n"
""
                        "\n"
"                                QPushButton {\n"
"                                background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #686868, stop: 0.4 #505050,\n"
"                                stop: 0.5 #686868, stop: 1.0 #505050);\n"
"                                border: 2px solid #303030;\n"
"                                border-bottom-color: #303030; /* same as the pane color */\n"
"                                border-top-left-radius: 3px;\n"
"                                border-top-right-radius: 3px;\n"
"                                min-width: 14.4ex;\n"
"                                padding: 7px;\n"
"                                }\n"
"\n"
"                                QPushButton:flat {\n"
"                                border: none; /* no border for a flat push button */\n"
"                                }\n"
"\n"
"                                QPushButton:default {\n"
"                                border-color: nav"
                        "y; /* make the default button prominent */\n"
"                                }\n"
"\n"
"                                QPushButton:selected {\n"
"                                border-color: #FF0000;\n"
"                                border-bottom-color: #FF0000; /* same as pane color */\n"
"                                }\n"
"                            "));
        m_delete_button_1 = new QPushButton(Monday_t);
        m_delete_button_1->setObjectName(QString::fromUtf8("m_delete_button_1"));
        m_delete_button_1->setGeometry(QRect(930, 220, 131, 111));
        m_delete_button_1->setFont(font5);
        m_delete_button_1->setLayoutDirection(Qt::LeftToRight);
        m_delete_button_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                                border: 2px solid #8f8f91;\n"
"                                border-radius: 6px;\n"
"                                background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"                                min-width: 80px;\n"
"                                }\n"
"\n"
"                                QPushButton:pressed {\n"
"                                background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"                                }\n"
"\n"
"                                QPushButton:selected, QPushButton:hover {\n"
"                                background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #484848, stop: 0.4 #585858,\n"
"                                stop: 0.5 #585858, stop: 1.0 #484848);\n"
"                                }\n"
""
                        "\n"
"                                QPushButton {\n"
"                                background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #686868, stop: 0.4 #505050,\n"
"                                stop: 0.5 #686868, stop: 1.0 #505050);\n"
"                                border: 2px solid #303030;\n"
"                                border-bottom-color: #303030; /* same as the pane color */\n"
"                                border-top-left-radius: 3px;\n"
"                                border-top-right-radius: 3px;\n"
"                                min-width: 14.4ex;\n"
"                                padding: 3px;\n"
"                                }\n"
"\n"
"                                QPushButton:flat {\n"
"                                border: none; /* no border for a flat push button */\n"
"                                }\n"
"\n"
"                                QPushButton:default {\n"
"                                border-color: nav"
                        "y; /* make the default button prominent */\n"
"                                }\n"
"\n"
"                                QPushButton:selected {\n"
"                                border-color: #FF0000;\n"
"                                border-bottom-color: #FF0000; /* same as pane color */\n"
"                                }\n"
"                            "));
        WeekDay_Tabs->addTab(Monday_t, QString());
        Tuesday_t = new QWidget();
        Tuesday_t->setObjectName(QString::fromUtf8("Tuesday_t"));
        Tuesday_t->setAutoFillBackground(true);
        tuesday_stacked_2 = new QStackedWidget(Tuesday_t);
        tuesday_stacked_2->setObjectName(QString::fromUtf8("tuesday_stacked_2"));
        tuesday_stacked_2->setEnabled(true);
        tuesday_stacked_2->setGeometry(QRect(30, 30, 741, 331));
        tuesday_stacked_2->setStyleSheet(QString::fromUtf8("QStackedWidget {\n"
"                                border: 3px solid rgb(25, 26, 26);\n"
"                                background: rgb(139, 141, 141);\n"
"                                }\n"
"\n"
"                                #page1 {\n"
"                                background-color: blue;\n"
"                                }\n"
"                                #page2 {\n"
"                                background-color: red;\n"
"                                }\n"
"                            "));
        m_new_button_2 = new QPushButton(Tuesday_t);
        m_new_button_2->setObjectName(QString::fromUtf8("m_new_button_2"));
        m_new_button_2->setGeometry(QRect(790, 220, 131, 111));
        m_new_button_2->setFont(font6);
        m_new_button_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                                border: 2px solid #8f8f91;\n"
"                                border-radius: 6px;\n"
"                                background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"                                min-width: 80px;\n"
"                                }\n"
"\n"
"                                QPushButton:pressed {\n"
"                                background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"                                }\n"
"\n"
"                                QPushButton:selected, QPushButton:hover {\n"
"                                background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #484848, stop: 0.4 #585858,\n"
"                                stop: 0.5 #585858, stop: 1.0 #484848);\n"
"                                }\n"
""
                        "\n"
"                                QPushButton {\n"
"                                background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #686868, stop: 0.4 #505050,\n"
"                                stop: 0.5 #686868, stop: 1.0 #505050);\n"
"                                border: 2px solid #303030;\n"
"                                border-bottom-color: #303030; /* same as the pane color */\n"
"                                border-top-left-radius: 3px;\n"
"                                border-top-right-radius: 3px;\n"
"                                min-width: 14.4ex;\n"
"                                padding: 3px;\n"
"                                }\n"
"\n"
"                                QPushButton:flat {\n"
"                                border: #FF0000; /* no border for a flat push button */\n"
"                                }\n"
"\n"
"                                QPushButton:default {\n"
"                                border-color: "
                        "navy; /* make the default button prominent */\n"
"                                }\n"
"\n"
"\n"
"                            "));
        m_next_button_2 = new QPushButton(Tuesday_t);
        m_next_button_2->setObjectName(QString::fromUtf8("m_next_button_2"));
        m_next_button_2->setGeometry(QRect(930, 60, 131, 111));
        m_next_button_2->setFont(font8);
        m_next_button_2->setMouseTracking(false);
        m_next_button_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                                border: 2px solid #8f8f91;\n"
"                                border-radius: 6px;\n"
"                                background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"                                min-width: 80px;\n"
"                                }\n"
"\n"
"                                QPushButton:pressed {\n"
"                                background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"                                }\n"
"\n"
"                                QPushButton:selected, QPushButton:hover {\n"
"                                background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #484848, stop: 0.4 #585858,\n"
"                                stop: 0.5 #585858, stop: 1.0 #484848);\n"
"                                }\n"
""
                        "\n"
"                                QPushButton {\n"
"                                background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #686868, stop: 0.4 #505050,\n"
"                                stop: 0.5 #686868, stop: 1.0 #505050);\n"
"                                border: 2px solid #303030;\n"
"                                border-bottom-color: #303030; /* same as the pane color */\n"
"                                border-top-left-radius: 3px;\n"
"                                border-top-right-radius: 3px;\n"
"                                min-width: 14.4ex;\n"
"                                padding: 7px;\n"
"                                }\n"
"\n"
"                                QPushButton:flat {\n"
"                                border: none; /* no border for a flat push button */\n"
"                                }\n"
"\n"
"                                QPushButton:default {\n"
"                                border-color: nav"
                        "y; /* make the default button prominent */\n"
"                                }\n"
"\n"
"                                QPushButton:selected {\n"
"                                border-color: #FF0000;\n"
"                                border-bottom-color: #FF0000; /* same as pane color */\n"
"                                }\n"
"                            "));
        m_prev_button_2 = new QPushButton(Tuesday_t);
        m_prev_button_2->setObjectName(QString::fromUtf8("m_prev_button_2"));
        m_prev_button_2->setGeometry(QRect(790, 60, 131, 111));
        m_prev_button_2->setFont(font6);
        m_prev_button_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                                border: 2px solid #8f8f91;\n"
"                                border-radius: 6px;\n"
"                                background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"                                min-width: 80px;\n"
"                                }\n"
"\n"
"                                QPushButton:pressed {\n"
"                                background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"                                }\n"
"\n"
"                                QPushButton:selected, QPushButton:hover {\n"
"                                background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #484848, stop: 0.4 #585858,\n"
"                                stop: 0.5 #585858, stop: 1.0 #484848);\n"
"                                }\n"
""
                        "\n"
"                                QPushButton {\n"
"                                background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #686868, stop: 0.4 #505050,\n"
"                                stop: 0.5 #686868, stop: 1.0 #505050);\n"
"                                border: 2px solid #303030;\n"
"                                border-bottom-color: #303030; /* same as the pane color */\n"
"                                border-top-left-radius: 3px;\n"
"                                border-top-right-radius: 3px;\n"
"                                min-width: 14.4ex;\n"
"                                padding: 7px;\n"
"                                }\n"
"\n"
"                                QPushButton:flat {\n"
"                                border: none; /* no border for a flat push button */\n"
"                                }\n"
"\n"
"                                QPushButton:default {\n"
"                                border-color: nav"
                        "y; /* make the default button prominent */\n"
"                                }\n"
"\n"
"                                QPushButton:selected {\n"
"                                border-color: #FF0000;\n"
"                                border-bottom-color: #FF0000; /* same as pane color */\n"
"                                }\n"
"                            "));
        m_delete_button_2 = new QPushButton(Tuesday_t);
        m_delete_button_2->setObjectName(QString::fromUtf8("m_delete_button_2"));
        m_delete_button_2->setGeometry(QRect(930, 220, 131, 111));
        m_delete_button_2->setFont(font5);
        m_delete_button_2->setLayoutDirection(Qt::LeftToRight);
        m_delete_button_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                                border: 2px solid #8f8f91;\n"
"                                border-radius: 6px;\n"
"                                background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"                                min-width: 80px;\n"
"                                }\n"
"\n"
"                                QPushButton:pressed {\n"
"                                background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"                                }\n"
"\n"
"                                QPushButton:selected, QPushButton:hover {\n"
"                                background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #484848, stop: 0.4 #585858,\n"
"                                stop: 0.5 #585858, stop: 1.0 #484848);\n"
"                                }\n"
""
                        "\n"
"                                QPushButton {\n"
"                                background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #686868, stop: 0.4 #505050,\n"
"                                stop: 0.5 #686868, stop: 1.0 #505050);\n"
"                                border: 2px solid #303030;\n"
"                                border-bottom-color: #303030; /* same as the pane color */\n"
"                                border-top-left-radius: 3px;\n"
"                                border-top-right-radius: 3px;\n"
"                                min-width: 14.4ex;\n"
"                                padding: 3px;\n"
"                                }\n"
"\n"
"                                QPushButton:flat {\n"
"                                border: none; /* no border for a flat push button */\n"
"                                }\n"
"\n"
"                                QPushButton:default {\n"
"                                border-color: nav"
                        "y; /* make the default button prominent */\n"
"                                }\n"
"\n"
"                                QPushButton:selected {\n"
"                                border-color: #FF0000;\n"
"                                border-bottom-color: #FF0000; /* same as pane color */\n"
"                                }\n"
"                            "));
        WeekDay_Tabs->addTab(Tuesday_t, QString());
        Wednesday_t = new QWidget();
        Wednesday_t->setObjectName(QString::fromUtf8("Wednesday_t"));
        Wednesday_t->setAutoFillBackground(true);
        m_prev_button_3 = new QPushButton(Wednesday_t);
        m_prev_button_3->setObjectName(QString::fromUtf8("m_prev_button_3"));
        m_prev_button_3->setGeometry(QRect(790, 60, 131, 111));
        m_prev_button_3->setFont(font6);
        m_prev_button_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                                border: 2px solid #8f8f91;\n"
"                                border-radius: 6px;\n"
"                                background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"                                min-width: 80px;\n"
"                                }\n"
"\n"
"                                QPushButton:pressed {\n"
"                                background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"                                }\n"
"\n"
"                                QPushButton:selected, QPushButton:hover {\n"
"                                background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #484848, stop: 0.4 #585858,\n"
"                                stop: 0.5 #585858, stop: 1.0 #484848);\n"
"                                }\n"
""
                        "\n"
"                                QPushButton {\n"
"                                background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #686868, stop: 0.4 #505050,\n"
"                                stop: 0.5 #686868, stop: 1.0 #505050);\n"
"                                border: 2px solid #303030;\n"
"                                border-bottom-color: #303030; /* same as the pane color */\n"
"                                border-top-left-radius: 3px;\n"
"                                border-top-right-radius: 3px;\n"
"                                min-width: 14.4ex;\n"
"                                padding: 7px;\n"
"                                }\n"
"\n"
"                                QPushButton:flat {\n"
"                                border: none; /* no border for a flat push button */\n"
"                                }\n"
"\n"
"                                QPushButton:default {\n"
"                                border-color: nav"
                        "y; /* make the default button prominent */\n"
"                                }\n"
"\n"
"                                QPushButton:selected {\n"
"                                border-color: #FF0000;\n"
"                                border-bottom-color: #FF0000; /* same as pane color */\n"
"                                }\n"
"                            "));
        m_next_button_3 = new QPushButton(Wednesday_t);
        m_next_button_3->setObjectName(QString::fromUtf8("m_next_button_3"));
        m_next_button_3->setGeometry(QRect(930, 60, 131, 111));
        m_next_button_3->setFont(font8);
        m_next_button_3->setMouseTracking(false);
        m_next_button_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                                border: 2px solid #8f8f91;\n"
"                                border-radius: 6px;\n"
"                                background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"                                min-width: 80px;\n"
"                                }\n"
"\n"
"                                QPushButton:pressed {\n"
"                                background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"                                }\n"
"\n"
"                                QPushButton:selected, QPushButton:hover {\n"
"                                background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #484848, stop: 0.4 #585858,\n"
"                                stop: 0.5 #585858, stop: 1.0 #484848);\n"
"                                }\n"
""
                        "\n"
"                                QPushButton {\n"
"                                background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #686868, stop: 0.4 #505050,\n"
"                                stop: 0.5 #686868, stop: 1.0 #505050);\n"
"                                border: 2px solid #303030;\n"
"                                border-bottom-color: #303030; /* same as the pane color */\n"
"                                border-top-left-radius: 3px;\n"
"                                border-top-right-radius: 3px;\n"
"                                min-width: 14.4ex;\n"
"                                padding: 7px;\n"
"                                }\n"
"\n"
"                                QPushButton:flat {\n"
"                                border: none; /* no border for a flat push button */\n"
"                                }\n"
"\n"
"                                QPushButton:default {\n"
"                                border-color: nav"
                        "y; /* make the default button prominent */\n"
"                                }\n"
"\n"
"                                QPushButton:selected {\n"
"                                border-color: #FF0000;\n"
"                                border-bottom-color: #FF0000; /* same as pane color */\n"
"                                }\n"
"                            "));
        m_new_button_3 = new QPushButton(Wednesday_t);
        m_new_button_3->setObjectName(QString::fromUtf8("m_new_button_3"));
        m_new_button_3->setGeometry(QRect(790, 220, 131, 111));
        m_new_button_3->setFont(font6);
        m_new_button_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                                border: 2px solid #8f8f91;\n"
"                                border-radius: 6px;\n"
"                                background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"                                min-width: 80px;\n"
"                                }\n"
"\n"
"                                QPushButton:pressed {\n"
"                                background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"                                }\n"
"\n"
"                                QPushButton:selected, QPushButton:hover {\n"
"                                background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #484848, stop: 0.4 #585858,\n"
"                                stop: 0.5 #585858, stop: 1.0 #484848);\n"
"                                }\n"
""
                        "\n"
"                                QPushButton {\n"
"                                background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #686868, stop: 0.4 #505050,\n"
"                                stop: 0.5 #686868, stop: 1.0 #505050);\n"
"                                border: 2px solid #303030;\n"
"                                border-bottom-color: #303030; /* same as the pane color */\n"
"                                border-top-left-radius: 3px;\n"
"                                border-top-right-radius: 3px;\n"
"                                min-width: 14.4ex;\n"
"                                padding: 3px;\n"
"                                }\n"
"\n"
"                                QPushButton:flat {\n"
"                                border: #FF0000; /* no border for a flat push button */\n"
"                                }\n"
"\n"
"                                QPushButton:default {\n"
"                                border-color: "
                        "navy; /* make the default button prominent */\n"
"                                }\n"
"\n"
"\n"
"                            "));
        m_delete_button_3 = new QPushButton(Wednesday_t);
        m_delete_button_3->setObjectName(QString::fromUtf8("m_delete_button_3"));
        m_delete_button_3->setGeometry(QRect(930, 220, 131, 111));
        m_delete_button_3->setFont(font5);
        m_delete_button_3->setLayoutDirection(Qt::LeftToRight);
        m_delete_button_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                                border: 2px solid #8f8f91;\n"
"                                border-radius: 6px;\n"
"                                background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"                                min-width: 80px;\n"
"                                }\n"
"\n"
"                                QPushButton:pressed {\n"
"                                background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"                                }\n"
"\n"
"                                QPushButton:selected, QPushButton:hover {\n"
"                                background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #484848, stop: 0.4 #585858,\n"
"                                stop: 0.5 #585858, stop: 1.0 #484848);\n"
"                                }\n"
""
                        "\n"
"                                QPushButton {\n"
"                                background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #686868, stop: 0.4 #505050,\n"
"                                stop: 0.5 #686868, stop: 1.0 #505050);\n"
"                                border: 2px solid #303030;\n"
"                                border-bottom-color: #303030; /* same as the pane color */\n"
"                                border-top-left-radius: 3px;\n"
"                                border-top-right-radius: 3px;\n"
"                                min-width: 14.4ex;\n"
"                                padding: 3px;\n"
"                                }\n"
"\n"
"                                QPushButton:flat {\n"
"                                border: none; /* no border for a flat push button */\n"
"                                }\n"
"\n"
"                                QPushButton:default {\n"
"                                border-color: nav"
                        "y; /* make the default button prominent */\n"
"                                }\n"
"\n"
"                                QPushButton:selected {\n"
"                                border-color: #FF0000;\n"
"                                border-bottom-color: #FF0000; /* same as pane color */\n"
"                                }\n"
"                            "));
        wednesday_stacked_3 = new QStackedWidget(Wednesday_t);
        wednesday_stacked_3->setObjectName(QString::fromUtf8("wednesday_stacked_3"));
        wednesday_stacked_3->setEnabled(true);
        wednesday_stacked_3->setGeometry(QRect(30, 30, 741, 331));
        wednesday_stacked_3->setStyleSheet(QString::fromUtf8("QStackedWidget {\n"
"                                border: 3px solid rgb(25, 26, 26);\n"
"                                background: rgb(139, 141, 141);\n"
"                                }\n"
"\n"
"                                #page1 {\n"
"                                background-color: blue;\n"
"                                }\n"
"                                #page2 {\n"
"                                background-color: red;\n"
"                                }\n"
"                            "));
        WeekDay_Tabs->addTab(Wednesday_t, QString());
        Thursday_t = new QWidget();
        Thursday_t->setObjectName(QString::fromUtf8("Thursday_t"));
        Thursday_t->setAutoFillBackground(true);
        m_prev_button_4 = new QPushButton(Thursday_t);
        m_prev_button_4->setObjectName(QString::fromUtf8("m_prev_button_4"));
        m_prev_button_4->setGeometry(QRect(790, 60, 131, 111));
        m_prev_button_4->setFont(font6);
        m_prev_button_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                                border: 2px solid #8f8f91;\n"
"                                border-radius: 6px;\n"
"                                background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"                                min-width: 80px;\n"
"                                }\n"
"\n"
"                                QPushButton:pressed {\n"
"                                background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"                                }\n"
"\n"
"                                QPushButton:selected, QPushButton:hover {\n"
"                                background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #484848, stop: 0.4 #585858,\n"
"                                stop: 0.5 #585858, stop: 1.0 #484848);\n"
"                                }\n"
""
                        "\n"
"                                QPushButton {\n"
"                                background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #686868, stop: 0.4 #505050,\n"
"                                stop: 0.5 #686868, stop: 1.0 #505050);\n"
"                                border: 2px solid #303030;\n"
"                                border-bottom-color: #303030; /* same as the pane color */\n"
"                                border-top-left-radius: 3px;\n"
"                                border-top-right-radius: 3px;\n"
"                                min-width: 14.4ex;\n"
"                                padding: 7px;\n"
"                                }\n"
"\n"
"                                QPushButton:flat {\n"
"                                border: none; /* no border for a flat push button */\n"
"                                }\n"
"\n"
"                                QPushButton:default {\n"
"                                border-color: nav"
                        "y; /* make the default button prominent */\n"
"                                }\n"
"\n"
"                                QPushButton:selected {\n"
"                                border-color: #FF0000;\n"
"                                border-bottom-color: #FF0000; /* same as pane color */\n"
"                                }\n"
"                            "));
        m_next_button_4 = new QPushButton(Thursday_t);
        m_next_button_4->setObjectName(QString::fromUtf8("m_next_button_4"));
        m_next_button_4->setGeometry(QRect(930, 60, 131, 111));
        m_next_button_4->setFont(font8);
        m_next_button_4->setMouseTracking(false);
        m_next_button_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                                border: 2px solid #8f8f91;\n"
"                                border-radius: 6px;\n"
"                                background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"                                min-width: 80px;\n"
"                                }\n"
"\n"
"                                QPushButton:pressed {\n"
"                                background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"                                }\n"
"\n"
"                                QPushButton:selected, QPushButton:hover {\n"
"                                background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #484848, stop: 0.4 #585858,\n"
"                                stop: 0.5 #585858, stop: 1.0 #484848);\n"
"                                }\n"
""
                        "\n"
"                                QPushButton {\n"
"                                background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #686868, stop: 0.4 #505050,\n"
"                                stop: 0.5 #686868, stop: 1.0 #505050);\n"
"                                border: 2px solid #303030;\n"
"                                border-bottom-color: #303030; /* same as the pane color */\n"
"                                border-top-left-radius: 3px;\n"
"                                border-top-right-radius: 3px;\n"
"                                min-width: 14.4ex;\n"
"                                padding: 7px;\n"
"                                }\n"
"\n"
"                                QPushButton:flat {\n"
"                                border: none; /* no border for a flat push button */\n"
"                                }\n"
"\n"
"                                QPushButton:default {\n"
"                                border-color: nav"
                        "y; /* make the default button prominent */\n"
"                                }\n"
"\n"
"                                QPushButton:selected {\n"
"                                border-color: #FF0000;\n"
"                                border-bottom-color: #FF0000; /* same as pane color */\n"
"                                }\n"
"                            "));
        m_new_button_4 = new QPushButton(Thursday_t);
        m_new_button_4->setObjectName(QString::fromUtf8("m_new_button_4"));
        m_new_button_4->setGeometry(QRect(790, 220, 131, 111));
        m_new_button_4->setFont(font6);
        m_new_button_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                                border: 2px solid #8f8f91;\n"
"                                border-radius: 6px;\n"
"                                background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"                                min-width: 80px;\n"
"                                }\n"
"\n"
"                                QPushButton:pressed {\n"
"                                background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"                                }\n"
"\n"
"                                QPushButton:selected, QPushButton:hover {\n"
"                                background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #484848, stop: 0.4 #585858,\n"
"                                stop: 0.5 #585858, stop: 1.0 #484848);\n"
"                                }\n"
""
                        "\n"
"                                QPushButton {\n"
"                                background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #686868, stop: 0.4 #505050,\n"
"                                stop: 0.5 #686868, stop: 1.0 #505050);\n"
"                                border: 2px solid #303030;\n"
"                                border-bottom-color: #303030; /* same as the pane color */\n"
"                                border-top-left-radius: 3px;\n"
"                                border-top-right-radius: 3px;\n"
"                                min-width: 14.4ex;\n"
"                                padding: 3px;\n"
"                                }\n"
"\n"
"                                QPushButton:flat {\n"
"                                border: #FF0000; /* no border for a flat push button */\n"
"                                }\n"
"\n"
"                                QPushButton:default {\n"
"                                border-color: "
                        "navy; /* make the default button prominent */\n"
"                                }\n"
"\n"
"\n"
"                            "));
        m_delete_button_4 = new QPushButton(Thursday_t);
        m_delete_button_4->setObjectName(QString::fromUtf8("m_delete_button_4"));
        m_delete_button_4->setGeometry(QRect(930, 220, 131, 111));
        m_delete_button_4->setFont(font5);
        m_delete_button_4->setLayoutDirection(Qt::LeftToRight);
        m_delete_button_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                                border: 2px solid #8f8f91;\n"
"                                border-radius: 6px;\n"
"                                background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"                                min-width: 80px;\n"
"                                }\n"
"\n"
"                                QPushButton:pressed {\n"
"                                background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"                                }\n"
"\n"
"                                QPushButton:selected, QPushButton:hover {\n"
"                                background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #484848, stop: 0.4 #585858,\n"
"                                stop: 0.5 #585858, stop: 1.0 #484848);\n"
"                                }\n"
""
                        "\n"
"                                QPushButton {\n"
"                                background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #686868, stop: 0.4 #505050,\n"
"                                stop: 0.5 #686868, stop: 1.0 #505050);\n"
"                                border: 2px solid #303030;\n"
"                                border-bottom-color: #303030; /* same as the pane color */\n"
"                                border-top-left-radius: 3px;\n"
"                                border-top-right-radius: 3px;\n"
"                                min-width: 14.4ex;\n"
"                                padding: 3px;\n"
"                                }\n"
"\n"
"                                QPushButton:flat {\n"
"                                border: none; /* no border for a flat push button */\n"
"                                }\n"
"\n"
"                                QPushButton:default {\n"
"                                border-color: nav"
                        "y; /* make the default button prominent */\n"
"                                }\n"
"\n"
"                                QPushButton:selected {\n"
"                                border-color: #FF0000;\n"
"                                border-bottom-color: #FF0000; /* same as pane color */\n"
"                                }\n"
"                            "));
        thursday_stacked_4 = new QStackedWidget(Thursday_t);
        thursday_stacked_4->setObjectName(QString::fromUtf8("thursday_stacked_4"));
        thursday_stacked_4->setEnabled(true);
        thursday_stacked_4->setGeometry(QRect(30, 30, 741, 331));
        thursday_stacked_4->setAutoFillBackground(false);
        thursday_stacked_4->setStyleSheet(QString::fromUtf8("QStackedWidget {\n"
"                                border: 3px solid rgb(25, 26, 26);\n"
"                                background: rgb(139, 141, 141);\n"
"                                }\n"
"\n"
"                                #page1 {\n"
"                                background-color: blue;\n"
"                                }\n"
"                                #page2 {\n"
"                                background-color: red;\n"
"                                }\n"
"                            "));
        WeekDay_Tabs->addTab(Thursday_t, QString());
        Friday_t = new QWidget();
        Friday_t->setObjectName(QString::fromUtf8("Friday_t"));
        Friday_t->setAutoFillBackground(true);
        m_prev_button_5 = new QPushButton(Friday_t);
        m_prev_button_5->setObjectName(QString::fromUtf8("m_prev_button_5"));
        m_prev_button_5->setGeometry(QRect(790, 60, 131, 111));
        m_prev_button_5->setFont(font6);
        m_prev_button_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                                border: 2px solid #8f8f91;\n"
"                                border-radius: 6px;\n"
"                                background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"                                min-width: 80px;\n"
"                                }\n"
"\n"
"                                QPushButton:pressed {\n"
"                                background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"                                }\n"
"\n"
"                                QPushButton:selected, QPushButton:hover {\n"
"                                background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #484848, stop: 0.4 #585858,\n"
"                                stop: 0.5 #585858, stop: 1.0 #484848);\n"
"                                }\n"
""
                        "\n"
"                                QPushButton {\n"
"                                background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #686868, stop: 0.4 #505050,\n"
"                                stop: 0.5 #686868, stop: 1.0 #505050);\n"
"                                border: 2px solid #303030;\n"
"                                border-bottom-color: #303030; /* same as the pane color */\n"
"                                border-top-left-radius: 3px;\n"
"                                border-top-right-radius: 3px;\n"
"                                min-width: 14.4ex;\n"
"                                padding: 7px;\n"
"                                }\n"
"\n"
"                                QPushButton:flat {\n"
"                                border: none; /* no border for a flat push button */\n"
"                                }\n"
"\n"
"                                QPushButton:default {\n"
"                                border-color: nav"
                        "y; /* make the default button prominent */\n"
"                                }\n"
"\n"
"                                QPushButton:selected {\n"
"                                border-color: #FF0000;\n"
"                                border-bottom-color: #FF0000; /* same as pane color */\n"
"                                }\n"
"                            "));
        m_next_button_5 = new QPushButton(Friday_t);
        m_next_button_5->setObjectName(QString::fromUtf8("m_next_button_5"));
        m_next_button_5->setGeometry(QRect(930, 60, 131, 111));
        m_next_button_5->setFont(font8);
        m_next_button_5->setMouseTracking(false);
        m_next_button_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                                border: 2px solid #8f8f91;\n"
"                                border-radius: 6px;\n"
"                                background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"                                min-width: 80px;\n"
"                                }\n"
"\n"
"                                QPushButton:pressed {\n"
"                                background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"                                }\n"
"\n"
"                                QPushButton:selected, QPushButton:hover {\n"
"                                background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #484848, stop: 0.4 #585858,\n"
"                                stop: 0.5 #585858, stop: 1.0 #484848);\n"
"                                }\n"
""
                        "\n"
"                                QPushButton {\n"
"                                background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #686868, stop: 0.4 #505050,\n"
"                                stop: 0.5 #686868, stop: 1.0 #505050);\n"
"                                border: 2px solid #303030;\n"
"                                border-bottom-color: #303030; /* same as the pane color */\n"
"                                border-top-left-radius: 3px;\n"
"                                border-top-right-radius: 3px;\n"
"                                min-width: 14.4ex;\n"
"                                padding: 7px;\n"
"                                }\n"
"\n"
"                                QPushButton:flat {\n"
"                                border: none; /* no border for a flat push button */\n"
"                                }\n"
"\n"
"                                QPushButton:default {\n"
"                                border-color: nav"
                        "y; /* make the default button prominent */\n"
"                                }\n"
"\n"
"                                QPushButton:selected {\n"
"                                border-color: #FF0000;\n"
"                                border-bottom-color: #FF0000; /* same as pane color */\n"
"                                }\n"
"                            "));
        m_new_button_5 = new QPushButton(Friday_t);
        m_new_button_5->setObjectName(QString::fromUtf8("m_new_button_5"));
        m_new_button_5->setGeometry(QRect(790, 220, 131, 111));
        m_new_button_5->setFont(font6);
        m_new_button_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                                border: 2px solid #8f8f91;\n"
"                                border-radius: 6px;\n"
"                                background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"                                min-width: 80px;\n"
"                                }\n"
"\n"
"                                QPushButton:pressed {\n"
"                                background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"                                }\n"
"\n"
"                                QPushButton:selected, QPushButton:hover {\n"
"                                background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #484848, stop: 0.4 #585858,\n"
"                                stop: 0.5 #585858, stop: 1.0 #484848);\n"
"                                }\n"
""
                        "\n"
"                                QPushButton {\n"
"                                background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #686868, stop: 0.4 #505050,\n"
"                                stop: 0.5 #686868, stop: 1.0 #505050);\n"
"                                border: 2px solid #303030;\n"
"                                border-bottom-color: #303030; /* same as the pane color */\n"
"                                border-top-left-radius: 3px;\n"
"                                border-top-right-radius: 3px;\n"
"                                min-width: 14.4ex;\n"
"                                padding: 3px;\n"
"                                }\n"
"\n"
"                                QPushButton:flat {\n"
"                                border: #FF0000; /* no border for a flat push button */\n"
"                                }\n"
"\n"
"                                QPushButton:default {\n"
"                                border-color: "
                        "navy; /* make the default button prominent */\n"
"                                }\n"
"\n"
"\n"
"                            "));
        m_delete_button_5 = new QPushButton(Friday_t);
        m_delete_button_5->setObjectName(QString::fromUtf8("m_delete_button_5"));
        m_delete_button_5->setGeometry(QRect(930, 220, 131, 111));
        m_delete_button_5->setFont(font5);
        m_delete_button_5->setLayoutDirection(Qt::LeftToRight);
        m_delete_button_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                                border: 2px solid #8f8f91;\n"
"                                border-radius: 6px;\n"
"                                background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"                                min-width: 80px;\n"
"                                }\n"
"\n"
"                                QPushButton:pressed {\n"
"                                background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"                                }\n"
"\n"
"                                QPushButton:selected, QPushButton:hover {\n"
"                                background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #484848, stop: 0.4 #585858,\n"
"                                stop: 0.5 #585858, stop: 1.0 #484848);\n"
"                                }\n"
""
                        "\n"
"                                QPushButton {\n"
"                                background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #686868, stop: 0.4 #505050,\n"
"                                stop: 0.5 #686868, stop: 1.0 #505050);\n"
"                                border: 2px solid #303030;\n"
"                                border-bottom-color: #303030; /* same as the pane color */\n"
"                                border-top-left-radius: 3px;\n"
"                                border-top-right-radius: 3px;\n"
"                                min-width: 14.4ex;\n"
"                                padding: 3px;\n"
"                                }\n"
"\n"
"                                QPushButton:flat {\n"
"                                border: none; /* no border for a flat push button */\n"
"                                }\n"
"\n"
"                                QPushButton:default {\n"
"                                border-color: nav"
                        "y; /* make the default button prominent */\n"
"                                }\n"
"\n"
"                                QPushButton:selected {\n"
"                                border-color: #FF0000;\n"
"                                border-bottom-color: #FF0000; /* same as pane color */\n"
"                                }\n"
"                            "));
        friday_stacked_5 = new QStackedWidget(Friday_t);
        friday_stacked_5->setObjectName(QString::fromUtf8("friday_stacked_5"));
        friday_stacked_5->setEnabled(true);
        friday_stacked_5->setGeometry(QRect(30, 30, 741, 331));
        friday_stacked_5->setAutoFillBackground(false);
        friday_stacked_5->setStyleSheet(QString::fromUtf8("QStackedWidget {\n"
"                                border: 3px solid rgb(25, 26, 26);\n"
"                                background: rgb(139, 141, 141);\n"
"                                }\n"
"\n"
"                                #page1 {\n"
"                                background-color: blue;\n"
"                                }\n"
"                                #page2 {\n"
"                                background-color: red;\n"
"                                }\n"
"                            "));
        WeekDay_Tabs->addTab(Friday_t, QString());
        Saturday_t = new QWidget();
        Saturday_t->setObjectName(QString::fromUtf8("Saturday_t"));
        Saturday_t->setAutoFillBackground(true);
        m_prev_button_6 = new QPushButton(Saturday_t);
        m_prev_button_6->setObjectName(QString::fromUtf8("m_prev_button_6"));
        m_prev_button_6->setGeometry(QRect(790, 60, 131, 111));
        m_prev_button_6->setFont(font6);
        m_prev_button_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                                border: 2px solid #8f8f91;\n"
"                                border-radius: 6px;\n"
"                                background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"                                min-width: 80px;\n"
"                                }\n"
"\n"
"                                QPushButton:pressed {\n"
"                                background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"                                }\n"
"\n"
"                                QPushButton:selected, QPushButton:hover {\n"
"                                background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #484848, stop: 0.4 #585858,\n"
"                                stop: 0.5 #585858, stop: 1.0 #484848);\n"
"                                }\n"
""
                        "\n"
"                                QPushButton {\n"
"                                background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #686868, stop: 0.4 #505050,\n"
"                                stop: 0.5 #686868, stop: 1.0 #505050);\n"
"                                border: 2px solid #303030;\n"
"                                border-bottom-color: #303030; /* same as the pane color */\n"
"                                border-top-left-radius: 3px;\n"
"                                border-top-right-radius: 3px;\n"
"                                min-width: 14.4ex;\n"
"                                padding: 7px;\n"
"                                }\n"
"\n"
"                                QPushButton:flat {\n"
"                                border: none; /* no border for a flat push button */\n"
"                                }\n"
"\n"
"                                QPushButton:default {\n"
"                                border-color: nav"
                        "y; /* make the default button prominent */\n"
"                                }\n"
"\n"
"                                QPushButton:selected {\n"
"                                border-color: #FF0000;\n"
"                                border-bottom-color: #FF0000; /* same as pane color */\n"
"                                }\n"
"                            "));
        m_next_button_6 = new QPushButton(Saturday_t);
        m_next_button_6->setObjectName(QString::fromUtf8("m_next_button_6"));
        m_next_button_6->setGeometry(QRect(930, 60, 131, 111));
        m_next_button_6->setFont(font8);
        m_next_button_6->setMouseTracking(false);
        m_next_button_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                                border: 2px solid #8f8f91;\n"
"                                border-radius: 6px;\n"
"                                background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"                                min-width: 80px;\n"
"                                }\n"
"\n"
"                                QPushButton:pressed {\n"
"                                background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"                                }\n"
"\n"
"                                QPushButton:selected, QPushButton:hover {\n"
"                                background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #484848, stop: 0.4 #585858,\n"
"                                stop: 0.5 #585858, stop: 1.0 #484848);\n"
"                                }\n"
""
                        "\n"
"                                QPushButton {\n"
"                                background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #686868, stop: 0.4 #505050,\n"
"                                stop: 0.5 #686868, stop: 1.0 #505050);\n"
"                                border: 2px solid #303030;\n"
"                                border-bottom-color: #303030; /* same as the pane color */\n"
"                                border-top-left-radius: 3px;\n"
"                                border-top-right-radius: 3px;\n"
"                                min-width: 14.4ex;\n"
"                                padding: 7px;\n"
"                                }\n"
"\n"
"                                QPushButton:flat {\n"
"                                border: none; /* no border for a flat push button */\n"
"                                }\n"
"\n"
"                                QPushButton:default {\n"
"                                border-color: nav"
                        "y; /* make the default button prominent */\n"
"                                }\n"
"\n"
"                                QPushButton:selected {\n"
"                                border-color: #FF0000;\n"
"                                border-bottom-color: #FF0000; /* same as pane color */\n"
"                                }\n"
"                            "));
        m_new_button_6 = new QPushButton(Saturday_t);
        m_new_button_6->setObjectName(QString::fromUtf8("m_new_button_6"));
        m_new_button_6->setGeometry(QRect(790, 220, 131, 111));
        m_new_button_6->setFont(font6);
        m_new_button_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                                border: 2px solid #8f8f91;\n"
"                                border-radius: 6px;\n"
"                                background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"                                min-width: 80px;\n"
"                                }\n"
"\n"
"                                QPushButton:pressed {\n"
"                                background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"                                }\n"
"\n"
"                                QPushButton:selected, QPushButton:hover {\n"
"                                background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #484848, stop: 0.4 #585858,\n"
"                                stop: 0.5 #585858, stop: 1.0 #484848);\n"
"                                }\n"
""
                        "\n"
"                                QPushButton {\n"
"                                background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #686868, stop: 0.4 #505050,\n"
"                                stop: 0.5 #686868, stop: 1.0 #505050);\n"
"                                border: 2px solid #303030;\n"
"                                border-bottom-color: #303030; /* same as the pane color */\n"
"                                border-top-left-radius: 3px;\n"
"                                border-top-right-radius: 3px;\n"
"                                min-width: 14.4ex;\n"
"                                padding: 3px;\n"
"                                }\n"
"\n"
"                                QPushButton:flat {\n"
"                                border: #FF0000; /* no border for a flat push button */\n"
"                                }\n"
"\n"
"                                QPushButton:default {\n"
"                                border-color: "
                        "navy; /* make the default button prominent */\n"
"                                }\n"
"\n"
"\n"
"                            "));
        m_delete_button_6 = new QPushButton(Saturday_t);
        m_delete_button_6->setObjectName(QString::fromUtf8("m_delete_button_6"));
        m_delete_button_6->setGeometry(QRect(930, 220, 131, 111));
        m_delete_button_6->setFont(font5);
        m_delete_button_6->setLayoutDirection(Qt::LeftToRight);
        m_delete_button_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                                border: 2px solid #8f8f91;\n"
"                                border-radius: 6px;\n"
"                                background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"                                min-width: 80px;\n"
"                                }\n"
"\n"
"                                QPushButton:pressed {\n"
"                                background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"                                }\n"
"\n"
"                                QPushButton:selected, QPushButton:hover {\n"
"                                background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #484848, stop: 0.4 #585858,\n"
"                                stop: 0.5 #585858, stop: 1.0 #484848);\n"
"                                }\n"
""
                        "\n"
"                                QPushButton {\n"
"                                background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #686868, stop: 0.4 #505050,\n"
"                                stop: 0.5 #686868, stop: 1.0 #505050);\n"
"                                border: 2px solid #303030;\n"
"                                border-bottom-color: #303030; /* same as the pane color */\n"
"                                border-top-left-radius: 3px;\n"
"                                border-top-right-radius: 3px;\n"
"                                min-width: 14.4ex;\n"
"                                padding: 3px;\n"
"                                }\n"
"\n"
"                                QPushButton:flat {\n"
"                                border: none; /* no border for a flat push button */\n"
"                                }\n"
"\n"
"                                QPushButton:default {\n"
"                                border-color: nav"
                        "y; /* make the default button prominent */\n"
"                                }\n"
"\n"
"                                QPushButton:selected {\n"
"                                border-color: #FF0000;\n"
"                                border-bottom-color: #FF0000; /* same as pane color */\n"
"                                }\n"
"                            "));
        saturday_stacked_6 = new QStackedWidget(Saturday_t);
        saturday_stacked_6->setObjectName(QString::fromUtf8("saturday_stacked_6"));
        saturday_stacked_6->setEnabled(true);
        saturday_stacked_6->setGeometry(QRect(30, 30, 741, 331));
        saturday_stacked_6->setStyleSheet(QString::fromUtf8("QStackedWidget {\n"
"                                border: 3px solid rgb(25, 26, 26);\n"
"                                background: rgb(139, 141, 141);\n"
"                                }\n"
"\n"
"                                #page1 {\n"
"                                background-color: blue;\n"
"                                }\n"
"                                #page2 {\n"
"                                background-color: red;\n"
"                                }\n"
"                            "));
        WeekDay_Tabs->addTab(Saturday_t, QString());
        Sunday_t = new QWidget();
        Sunday_t->setObjectName(QString::fromUtf8("Sunday_t"));
        Sunday_t->setAutoFillBackground(true);
        m_prev_button_0 = new QPushButton(Sunday_t);
        m_prev_button_0->setObjectName(QString::fromUtf8("m_prev_button_0"));
        m_prev_button_0->setGeometry(QRect(790, 60, 131, 111));
        m_prev_button_0->setFont(font6);
        m_prev_button_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                                border: 2px solid #8f8f91;\n"
"                                border-radius: 6px;\n"
"                                background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"                                min-width: 80px;\n"
"                                }\n"
"\n"
"                                QPushButton:pressed {\n"
"                                background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"                                }\n"
"\n"
"                                QPushButton:selected, QPushButton:hover {\n"
"                                background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #484848, stop: 0.4 #585858,\n"
"                                stop: 0.5 #585858, stop: 1.0 #484848);\n"
"                                }\n"
""
                        "\n"
"                                QPushButton {\n"
"                                background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #686868, stop: 0.4 #505050,\n"
"                                stop: 0.5 #686868, stop: 1.0 #505050);\n"
"                                border: 2px solid #303030;\n"
"                                border-bottom-color: #303030; /* same as the pane color */\n"
"                                border-top-left-radius: 3px;\n"
"                                border-top-right-radius: 3px;\n"
"                                min-width: 14.4ex;\n"
"                                padding: 7px;\n"
"                                }\n"
"\n"
"                                QPushButton:flat {\n"
"                                border: none; /* no border for a flat push button */\n"
"                                }\n"
"\n"
"                                QPushButton:default {\n"
"                                border-color: nav"
                        "y; /* make the default button prominent */\n"
"                                }\n"
"\n"
"                                QPushButton:selected {\n"
"                                border-color: #FF0000;\n"
"                                border-bottom-color: #FF0000; /* same as pane color */\n"
"                                }\n"
"                            "));
        m_next_button_0 = new QPushButton(Sunday_t);
        m_next_button_0->setObjectName(QString::fromUtf8("m_next_button_0"));
        m_next_button_0->setGeometry(QRect(930, 60, 131, 111));
        m_next_button_0->setFont(font8);
        m_next_button_0->setMouseTracking(false);
        m_next_button_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                                border: 2px solid #8f8f91;\n"
"                                border-radius: 6px;\n"
"                                background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"                                min-width: 80px;\n"
"                                }\n"
"\n"
"                                QPushButton:pressed {\n"
"                                background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"                                }\n"
"\n"
"                                QPushButton:selected, QPushButton:hover {\n"
"                                background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #484848, stop: 0.4 #585858,\n"
"                                stop: 0.5 #585858, stop: 1.0 #484848);\n"
"                                }\n"
""
                        "\n"
"                                QPushButton {\n"
"                                background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #686868, stop: 0.4 #505050,\n"
"                                stop: 0.5 #686868, stop: 1.0 #505050);\n"
"                                border: 2px solid #303030;\n"
"                                border-bottom-color: #303030; /* same as the pane color */\n"
"                                border-top-left-radius: 3px;\n"
"                                border-top-right-radius: 3px;\n"
"                                min-width: 14.4ex;\n"
"                                padding: 7px;\n"
"                                }\n"
"\n"
"                                QPushButton:flat {\n"
"                                border: none; /* no border for a flat push button */\n"
"                                }\n"
"\n"
"                                QPushButton:default {\n"
"                                border-color: nav"
                        "y; /* make the default button prominent */\n"
"                                }\n"
"\n"
"                                QPushButton:selected {\n"
"                                border-color: #FF0000;\n"
"                                border-bottom-color: #FF0000; /* same as pane color */\n"
"                                }\n"
"                            "));
        m_new_button_0 = new QPushButton(Sunday_t);
        m_new_button_0->setObjectName(QString::fromUtf8("m_new_button_0"));
        m_new_button_0->setGeometry(QRect(790, 220, 131, 111));
        m_new_button_0->setFont(font6);
        m_new_button_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                                border: 2px solid #8f8f91;\n"
"                                border-radius: 6px;\n"
"                                background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"                                min-width: 80px;\n"
"                                }\n"
"\n"
"                                QPushButton:pressed {\n"
"                                background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"                                }\n"
"\n"
"                                QPushButton:selected, QPushButton:hover {\n"
"                                background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #484848, stop: 0.4 #585858,\n"
"                                stop: 0.5 #585858, stop: 1.0 #484848);\n"
"                                }\n"
""
                        "\n"
"                                QPushButton {\n"
"                                background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #686868, stop: 0.4 #505050,\n"
"                                stop: 0.5 #686868, stop: 1.0 #505050);\n"
"                                border: 2px solid #303030;\n"
"                                border-bottom-color: #303030; /* same as the pane color */\n"
"                                border-top-left-radius: 3px;\n"
"                                border-top-right-radius: 3px;\n"
"                                min-width: 14.4ex;\n"
"                                padding: 3px;\n"
"                                }\n"
"\n"
"                                QPushButton:flat {\n"
"                                border: #FF0000; /* no border for a flat push button */\n"
"                                }\n"
"\n"
"                                QPushButton:default {\n"
"                                border-color: "
                        "navy; /* make the default button prominent */\n"
"                                }\n"
"\n"
"\n"
"                            "));
        m_delete_button_0 = new QPushButton(Sunday_t);
        m_delete_button_0->setObjectName(QString::fromUtf8("m_delete_button_0"));
        m_delete_button_0->setGeometry(QRect(930, 220, 131, 111));
        m_delete_button_0->setFont(font5);
        m_delete_button_0->setLayoutDirection(Qt::LeftToRight);
        m_delete_button_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                                border: 2px solid #8f8f91;\n"
"                                border-radius: 6px;\n"
"                                background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"                                min-width: 80px;\n"
"                                }\n"
"\n"
"                                QPushButton:pressed {\n"
"                                background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"                                }\n"
"\n"
"                                QPushButton:selected, QPushButton:hover {\n"
"                                background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #484848, stop: 0.4 #585858,\n"
"                                stop: 0.5 #585858, stop: 1.0 #484848);\n"
"                                }\n"
""
                        "\n"
"                                QPushButton {\n"
"                                background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #686868, stop: 0.4 #505050,\n"
"                                stop: 0.5 #686868, stop: 1.0 #505050);\n"
"                                border: 2px solid #303030;\n"
"                                border-bottom-color: #303030; /* same as the pane color */\n"
"                                border-top-left-radius: 3px;\n"
"                                border-top-right-radius: 3px;\n"
"                                min-width: 14.4ex;\n"
"                                padding: 3px;\n"
"                                }\n"
"\n"
"                                QPushButton:flat {\n"
"                                border: none; /* no border for a flat push button */\n"
"                                }\n"
"\n"
"                                QPushButton:default {\n"
"                                border-color: nav"
                        "y; /* make the default button prominent */\n"
"                                }\n"
"\n"
"                                QPushButton:selected {\n"
"                                border-color: #FF0000;\n"
"                                border-bottom-color: #FF0000; /* same as pane color */\n"
"                                }\n"
"                            "));
        sunday_stacked_0 = new QStackedWidget(Sunday_t);
        sunday_stacked_0->setObjectName(QString::fromUtf8("sunday_stacked_0"));
        sunday_stacked_0->setEnabled(true);
        sunday_stacked_0->setGeometry(QRect(30, 30, 741, 331));
        sunday_stacked_0->setAutoFillBackground(false);
        sunday_stacked_0->setStyleSheet(QString::fromUtf8("QStackedWidget {\n"
"                                border: 3px solid rgb(25, 26, 26);\n"
"                                background: rgb(139, 141, 141);\n"
"                                }\n"
"\n"
"                                #page1 {\n"
"                                background-color: blue;\n"
"                                }\n"
"                                #page2 {\n"
"                                background-color: red;\n"
"                                }\n"
"                            "));
        WeekDay_Tabs->addTab(Sunday_t, QString());
        App_Title = new QLabel(centralwidget);
        App_Title->setObjectName(QString::fromUtf8("App_Title"));
        App_Title->setGeometry(QRect(59, 35, 581, 121));
        QFont font9;
        font9.setFamily(QString::fromUtf8("Gill Sans"));
        font9.setPointSize(96);
        App_Title->setFont(font9);
        ZOOMer->setCentralWidget(centralwidget);

        retranslateUi(ZOOMer);

        WeekDay_Tabs->setCurrentIndex(1);
        monday_stacked_1->setCurrentIndex(-1);
        m_delete_button_1->setDefault(false);
        tuesday_stacked_2->setCurrentIndex(-1);
        m_delete_button_2->setDefault(false);
        m_delete_button_3->setDefault(false);
        wednesday_stacked_3->setCurrentIndex(-1);
        m_delete_button_4->setDefault(false);
        thursday_stacked_4->setCurrentIndex(-1);
        m_delete_button_5->setDefault(false);
        friday_stacked_5->setCurrentIndex(-1);
        m_delete_button_6->setDefault(false);
        saturday_stacked_6->setCurrentIndex(-1);
        m_delete_button_0->setDefault(false);
        sunday_stacked_0->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(ZOOMer);
    } // setupUi

    void retranslateUi(QMainWindow *ZOOMer)
    {
        ZOOMer->setWindowTitle(QCoreApplication::translate("ZOOMer", "ZOOMer", nullptr));
#if QT_CONFIG(accessibility)
        ZOOMer->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
        weekdays_7->setItemText(0, QCoreApplication::translate("ZOOMer", "Select Day", nullptr));
        weekdays_7->setItemText(1, QCoreApplication::translate("ZOOMer", "Monday", nullptr));
        weekdays_7->setItemText(2, QCoreApplication::translate("ZOOMer", "Tuseday", nullptr));
        weekdays_7->setItemText(3, QCoreApplication::translate("ZOOMer", "Wednesday", nullptr));
        weekdays_7->setItemText(4, QCoreApplication::translate("ZOOMer", "Thursday", nullptr));
        weekdays_7->setItemText(5, QCoreApplication::translate("ZOOMer", "Friday", nullptr));
        weekdays_7->setItemText(6, QCoreApplication::translate("ZOOMer", "Saturday", nullptr));
        weekdays_7->setItemText(7, QCoreApplication::translate("ZOOMer", "Sunday", nullptr));
        weekdays_7->setItemText(8, QString());

        checkBox_mon->setText(QCoreApplication::translate("ZOOMer", "Monday", nullptr));
        checkBox_tue->setText(QCoreApplication::translate("ZOOMer", "Tuseday", nullptr));
        checkBox_thrus->setText(QCoreApplication::translate("ZOOMer", "Thrusday", nullptr));
        checkBox_fri->setText(QCoreApplication::translate("ZOOMer", "Friday", nullptr));
        checkBox_sat->setText(QCoreApplication::translate("ZOOMer", "Saturday", nullptr));
        checkBox_sun->setText(QCoreApplication::translate("ZOOMer", "Sunday", nullptr));
        label_2->setText(QCoreApplication::translate("ZOOMer", "  Day Repeater", nullptr));
        checkBox_weds->setText(QCoreApplication::translate("ZOOMer", "Wednesday", nullptr));
        program_runner->setText(QCoreApplication::translate("ZOOMer", "Launch Program", nullptr));
#if QT_CONFIG(whatsthis)
        sound_b->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        sound_b->setText(QCoreApplication::translate("ZOOMer", "Sound: OFF", nullptr));
        list_label->setText(QCoreApplication::translate("ZOOMer", "No Meetings Running", nullptr));
        WeekDay_Tabs->setTabText(WeekDay_Tabs->indexOf(Home_t), QCoreApplication::translate("ZOOMer", "Home", nullptr));
        m_new_button_1->setText(QCoreApplication::translate("ZOOMer", "New Meeting", nullptr));
        m_next_button_1->setText(QCoreApplication::translate("ZOOMer", "Next Meeting", nullptr));
        m_prev_button_1->setText(QCoreApplication::translate("ZOOMer", "Prior Meeting", nullptr));
        m_delete_button_1->setText(QCoreApplication::translate("ZOOMer", "Delete Meeting", nullptr));
        WeekDay_Tabs->setTabText(WeekDay_Tabs->indexOf(Monday_t), QCoreApplication::translate("ZOOMer", "Monday", nullptr));
        m_new_button_2->setText(QCoreApplication::translate("ZOOMer", "New Meeting", nullptr));
        m_next_button_2->setText(QCoreApplication::translate("ZOOMer", "Next Meeting", nullptr));
        m_prev_button_2->setText(QCoreApplication::translate("ZOOMer", "Prior Meeting", nullptr));
        m_delete_button_2->setText(QCoreApplication::translate("ZOOMer", "Delete Meeting", nullptr));
        WeekDay_Tabs->setTabText(WeekDay_Tabs->indexOf(Tuesday_t), QCoreApplication::translate("ZOOMer", "Tuesday", nullptr));
        m_prev_button_3->setText(QCoreApplication::translate("ZOOMer", "Prior Meeting", nullptr));
        m_next_button_3->setText(QCoreApplication::translate("ZOOMer", "Next Meeting", nullptr));
        m_new_button_3->setText(QCoreApplication::translate("ZOOMer", "New Meeting", nullptr));
        m_delete_button_3->setText(QCoreApplication::translate("ZOOMer", "Delete Meeting", nullptr));
        WeekDay_Tabs->setTabText(WeekDay_Tabs->indexOf(Wednesday_t), QCoreApplication::translate("ZOOMer", "Wednesday", nullptr));
        m_prev_button_4->setText(QCoreApplication::translate("ZOOMer", "Prior Meeting", nullptr));
        m_next_button_4->setText(QCoreApplication::translate("ZOOMer", "Next Meeting", nullptr));
        m_new_button_4->setText(QCoreApplication::translate("ZOOMer", "New Meeting", nullptr));
        m_delete_button_4->setText(QCoreApplication::translate("ZOOMer", "Delete Meeting", nullptr));
        WeekDay_Tabs->setTabText(WeekDay_Tabs->indexOf(Thursday_t), QCoreApplication::translate("ZOOMer", "Thursday", nullptr));
        m_prev_button_5->setText(QCoreApplication::translate("ZOOMer", "Prior Meeting", nullptr));
        m_next_button_5->setText(QCoreApplication::translate("ZOOMer", "Next Meeting", nullptr));
        m_new_button_5->setText(QCoreApplication::translate("ZOOMer", "New Meeting", nullptr));
        m_delete_button_5->setText(QCoreApplication::translate("ZOOMer", "Delete Meeting", nullptr));
        WeekDay_Tabs->setTabText(WeekDay_Tabs->indexOf(Friday_t), QCoreApplication::translate("ZOOMer", "Friday", nullptr));
        m_prev_button_6->setText(QCoreApplication::translate("ZOOMer", "Prior Meeting", nullptr));
        m_next_button_6->setText(QCoreApplication::translate("ZOOMer", "Next Meeting", nullptr));
        m_new_button_6->setText(QCoreApplication::translate("ZOOMer", "New Meeting", nullptr));
        m_delete_button_6->setText(QCoreApplication::translate("ZOOMer", "Delete Meeting", nullptr));
        WeekDay_Tabs->setTabText(WeekDay_Tabs->indexOf(Saturday_t), QCoreApplication::translate("ZOOMer", "Saturday", nullptr));
        m_prev_button_0->setText(QCoreApplication::translate("ZOOMer", "Prior Meeting", nullptr));
        m_next_button_0->setText(QCoreApplication::translate("ZOOMer", "Next Meeting", nullptr));
        m_new_button_0->setText(QCoreApplication::translate("ZOOMer", "New Meeting", nullptr));
        m_delete_button_0->setText(QCoreApplication::translate("ZOOMer", "Delete Meeting", nullptr));
        WeekDay_Tabs->setTabText(WeekDay_Tabs->indexOf(Sunday_t), QCoreApplication::translate("ZOOMer", "Sunday", nullptr));
        App_Title->setText(QCoreApplication::translate("ZOOMer", "ZOOMer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ZOOMer: public Ui_ZOOMer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZOOMER_H
