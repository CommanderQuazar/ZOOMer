#include "zoomer.h"
#include "ui_zoomer.h"

using std::vector;

bool isStartLP = 1;
bool isStartS = 1;
bool hasError = 0;

ZOOMer::ZOOMer(QWidget *parent)
        : QMainWindow(parent), ui(new Ui::ZOOMer)
{
    ui->setupUi(this);

    //Loads in first pages for all weeks days
    newMeeting(ui->monday_stacked_1);
    newMeeting(ui->tuesday_stacked_2);
    newMeeting(ui->wednesday_stacked_3);
    newMeeting(ui->thursday_stacked_4);
    newMeeting(ui->friday_stacked_5);
    newMeeting(ui->saturday_stacked_6);
    newMeeting(ui->sunday_stacked_0);

}

ZOOMer::~ZOOMer()
{
    delete ui;
}

/* MONDAY---------------------------------------------------------------MONDAY */
void ZOOMer::on_m_prev_button_1_clicked()
{
    moveBack(ui->monday_stacked_1);
}

void ZOOMer::on_m_next_button_1_clicked()
{
    moveForward(ui->monday_stacked_1);
}

void ZOOMer::on_m_new_button_1_clicked()
{
    newMeeting(ui->monday_stacked_1);
}

void ZOOMer::on_m_delete_button_1_clicked()
{
    removePage(ui->monday_stacked_1);
}

/* TUESDAY---------------------------------------------------------------TUESDAY */

void ZOOMer::on_m_prev_button_2_clicked()
{
    moveBack(ui->tuesday_stacked_2);
}

void ZOOMer::on_m_next_button_2_clicked()
{
    moveForward(ui->tuesday_stacked_2);
}

void ZOOMer::on_m_new_button_2_clicked()
{
    newMeeting(ui->tuesday_stacked_2);
}

void ZOOMer::on_m_delete_button_2_clicked()
{
    removePage(ui->tuesday_stacked_2);
}

/* WEDNESDAY---------------------------------------------------------------WEDNESDAY */

void ZOOMer::on_m_prev_button_3_clicked()
{
    moveBack(ui->wednesday_stacked_3);
}

void ZOOMer::on_m_next_button_3_clicked()
{
    moveForward(ui->wednesday_stacked_3);
}

void ZOOMer::on_m_new_button_3_clicked()
{
    newMeeting(ui->wednesday_stacked_3);
}

void ZOOMer::on_m_delete_button_3_clicked()
{
    removePage(ui->wednesday_stacked_3);
}

/* THURSDAY---------------------------------------------------------------THURSDAY */

void ZOOMer::on_m_prev_button_4_clicked()
{
    moveBack(ui->thursday_stacked_4);
}

void ZOOMer::on_m_next_button_4_clicked()
{
    moveForward(ui->thursday_stacked_4);
}

void ZOOMer::on_m_new_button_4_clicked()
{
    newMeeting(ui->thursday_stacked_4);
}

void ZOOMer::on_m_delete_button_4_clicked()
{
    removePage(ui->thursday_stacked_4);
}

/* FRIDAY---------------------------------------------------------------FRIDAY */


void ZOOMer::on_m_prev_button_5_clicked()
{
    moveBack(ui->friday_stacked_5);
}

void ZOOMer::on_m_next_button_5_clicked()
{
    moveForward(ui->friday_stacked_5);
}

void ZOOMer::on_m_new_button_5_clicked()
{
    newMeeting(ui->friday_stacked_5);
}

void ZOOMer::on_m_delete_button_5_clicked()
{
    removePage(ui->friday_stacked_5);
}

/* SATURDAY---------------------------------------------------------------SATURDAY */


void ZOOMer::on_m_prev_button_6_clicked()
{
    moveBack(ui->saturday_stacked_6);
}

void ZOOMer::on_m_next_button_6_clicked()
{
    moveForward(ui->saturday_stacked_6);
}

void ZOOMer::on_m_new_button_6_clicked()
{
    newMeeting(ui->saturday_stacked_6);
}

void ZOOMer::on_m_delete_button_6_clicked()
{
    removePage(ui->saturday_stacked_6);
}

/* SUNDAY---------------------------------------------------------------SUNDAY */


void ZOOMer::on_m_prev_button_0_clicked()
{
    moveBack(ui->sunday_stacked_0);
}

void ZOOMer::on_m_next_button_0_clicked()
{
    moveForward(ui->sunday_stacked_0);
}

void ZOOMer::on_m_new_button_0_clicked()
{
    newMeeting(ui->sunday_stacked_0);
}

void ZOOMer::on_m_delete_button_0_clicked()
{
    removePage(ui->sunday_stacked_0);
}

extern "C"
{
    void program_runtime();
}


void ZOOMer::on_program_runner_clicked()
{
    //First button click build and launchs program
    struct token * Session = nullptr;

    if (isStartLP)
    {
        bool errorFlagged;

        QFile button_running("/Users/tobeyragain/Argon Galactic/Projects/ZOOMer/system/gui_osx/ZOOMer/button_quit.qss");
        if(button_running.open(QIODevice::ReadOnly))
            {
                QTextStream textStream(&button_running);
                QString styleSheet = textStream.readAll();
                button_running.close();
                ui->program_runner->setStyleSheet(styleSheet);
            }

         ui->program_runner->setText("Press to quit");

        //reads in meeting cards and add them to corrspoding headers
        struct token * Monday       = readIn(ui->monday_stacked_1, 1);
        struct token * Tuesday      = readIn(ui->tuesday_stacked_2, 2);
        struct token * Wednesday    = readIn(ui->wednesday_stacked_3, 3);
        struct token * Thursday     = readIn(ui->thursday_stacked_4, 4);
        struct token * Friday       = readIn(ui->friday_stacked_5, 5);
        struct token * Saturday     = readIn(ui->saturday_stacked_6, 6);
        struct token * Sunday       = readIn(ui->sunday_stacked_0, 0);

        Session = linker(Monday, Tuesday, Wednesday,
                    Thursday, Friday, Saturday,
                    Sunday);

        ui->list_label->hide();
        hasError = create_error_list(ui->meeting_list, Session);

        //If any errors are present display them to the list, if not processed onward
        if(!hasError)
        {
            Session = repeater(Session, ui->weekdays_7, ui->checkBox_mon, ui->checkBox_tue, ui->checkBox_weds,
                                        ui->checkBox_thrus, ui->checkBox_fri, ui->checkBox_sat,
                                        ui->checkBox_sun);

           //Inicializes list with Session info (Meeting Name, Start and End time)
           create_info_list(ui->meeting_list, Session);
        }

        //TO ADD - CREATES A NEW THREAD FOR THE BACKEND TO RUN ON
        isStartLP = false;

        }

        //Next button listens to kill the running thread and end the program
        else
        {
            QFile button_quit("/Users/tobeyragain/Argon Galactic/Projects/ZOOMer/system/gui_osx/ZOOMer/button_running.qss");
            if(button_quit.open(QIODevice::ReadOnly))
            {
                QTextStream textStream(&button_quit);
                QString styleSheet = textStream.readAll();
                button_quit.close();
                ui->program_runner->setStyleSheet(styleSheet);
            }

            ui->list_label->show();
            ui->program_runner->setText("Launch Program");

            //If there is not errors, clears the info list
            //Else the error list will be cleared
            if(hasError)
                model_error->clear();
            else
                model->clear();

            //TO ADD - IF A THREAD IS RUNNING, KILL THE THREAD


            //RESET VALUES
            RUNS = 0;
            for(int b = 0; b < 7; b++)
                meetings[b] = 0;

            hasError = 0;
            isStartLP = 1;
            free(Session);
        }
}


void ZOOMer::on_sound_b_clicked()
{
    if(isStartS)
    {
        QFile button_running("/Users/tobeyragain/Argon Galactic/Projects/ZOOMer/system/gui_osx/ZOOMer/button_quit.qss");
        if(button_running.open(QIODevice::ReadOnly))
            {
                QTextStream textStream(&button_running);
                QString styleSheet = textStream.readAll();
                button_running.close();
                ui->sound_b->setStyleSheet(styleSheet);
            }

         ui->sound_b->setText("Sound: ON");
         isSound = 1;
         isStartS = 0;
    }
    else
    {

        QFile button_quit("/Users/tobeyragain/Argon Galactic/Projects/ZOOMer/system/gui_osx/ZOOMer/button_running.qss");
        if(button_quit.open(QIODevice::ReadOnly))
            {
                QTextStream textStream(&button_quit);
                QString styleSheet = textStream.readAll();
                button_quit.close();
                ui->sound_b->setStyleSheet(styleSheet);

            }
        ui->sound_b->setText("Sound: OFF");
        isStartS = 1;
        isSound = 0;
    }
}
