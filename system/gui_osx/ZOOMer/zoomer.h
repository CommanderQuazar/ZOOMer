#ifndef ZOOMER_H
#define ZOOMER_H

/* DEPENDENCIES */
#include <QMainWindow>
#include <QObject>
#include <QUiLoader>
#include <QFile>
#include <QLineEdit>
#include <QTimeEdit>
#include <QtDebug>
#include <QStackedWidget>
#include <QPropertyAnimation>
#include <QGraphicsOpacityEffect>
#include <QCheckBox>
#include <QComboBox>
#include <QStandardItem>
#include <QListView>
#include <QPushButton>

#ifdef _WIN64
#include <Windows.h>
#else
#include <unistd.h>
#endif

#include <time.h>
#include <iostream>
#include <cstdlib>
#include <vector>

using std::vector;


//Links to backend
#include "/Users/tobeyragain/Argon Galactic/Projects/ZOOMer/system/includes/runtime-functionality.h"
#include "/Users/tobeyragain/Argon Galactic/Projects/ZOOMer/system/includes/errors.h"


QT_BEGIN_NAMESPACE

namespace Ui { class ZOOMer; }
QT_END_NAMESPACE

class ZOOMer : public QMainWindow
{
        Q_OBJECT

        public:
        ZOOMer(QWidget *parent = nullptr);
        ~ZOOMer();

        //CLuster button for nav functionailty
        void moveForward(QStackedWidget *);
        void moveBack(QStackedWidget *);
        void removePage(QStackedWidget *);
        void newMeeting(QStackedWidget *);

        int RUNS = 0;
        int meetings[7] = {0, 0, 0, 0, 0, 0, 0};
        bool isSound;


        QStandardItemModel *model;
        QStandardItemModel *model_error;

        struct token * linker(struct token *, struct token *, struct token *, struct token *,
            struct token *, struct token *, struct token *);

        struct token * repeater(struct token *, QComboBox *,
            QCheckBox *, QCheckBox *, QCheckBox *,
            QCheckBox *, QCheckBox *, QCheckBox *,
            QCheckBox *);

        struct token * readIn(QStackedWidget *, int);
        void sortDay(struct token *);
        void create_info_list(QListView *, struct token *);
        bool create_error_list(QListView *, struct token *);



        struct token * reassign_list(struct token *, int);
        void push_list(struct token* , struct token * , int);


        private slots:

        void on_m_prev_button_2_clicked();

        void on_m_next_button_2_clicked();

        void on_m_new_button_2_clicked();

        void on_m_delete_button_2_clicked();

        void on_m_prev_button_3_clicked();

        void on_m_next_button_3_clicked();

        void on_m_new_button_3_clicked();

        void on_m_delete_button_3_clicked();

        void on_m_prev_button_4_clicked();

        void on_m_next_button_4_clicked();

        void on_m_new_button_4_clicked();

        void on_m_delete_button_4_clicked();

        void on_m_prev_button_5_clicked();

        void on_m_new_button_5_clicked();

        void on_m_next_button_5_clicked();

        void on_m_delete_button_5_clicked();

        void on_m_prev_button_6_clicked();

        void on_m_next_button_6_clicked();

        void on_m_new_button_6_clicked();

        void on_m_delete_button_6_clicked();

        void on_m_prev_button_0_clicked();

        void on_m_next_button_0_clicked();

        void on_m_new_button_0_clicked();

        void on_m_delete_button_0_clicked();

        void on_program_runner_clicked();

        void on_m_prev_button_1_clicked();

        void on_m_next_button_1_clicked();

        void on_m_new_button_1_clicked();

        void on_m_delete_button_1_clicked();

        void on_sound_b_clicked();

private:
        Ui::ZOOMer *ui;
    };
#endif // ZOOMER_H
