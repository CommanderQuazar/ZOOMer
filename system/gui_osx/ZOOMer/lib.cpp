#include "zoomer.h"

using std::vector;

#define ADD_TO_ERROR model_error->setItem(index++, 0, item)


/*-------------------------------SORTING FUNCTIONALITY-------------------------------*/
//Swaps the data values of two token nodes

static void swap(struct token *a, struct token *b)
{
    struct token temp;
    temp.meeting_start_time = a->meeting_start_time;
    temp.meeting_end_time   = a->meeting_end_time;
    temp.URL = a->URL;

    a->meeting_start_time   = b->meeting_start_time;
    a->meeting_end_time     = b->meeting_end_time;
    a->URL                  = b->URL;

    b->meeting_start_time   = temp.meeting_start_time;
    b->meeting_end_time     = temp.meeting_end_time;
    b->URL                  = temp.URL;
}

//Sorts a single day via bubble sort in asseding order of start times
void ZOOMer::sortDay(struct token * dayHead)
{
    int swapped;
    struct token *ptr1;
    struct token *lptr = NULL;

    /* Checking for empty list */
    if (dayHead == NULL || dayHead->next == NULL)
        return;

    do
    {
        swapped = 0;
        ptr1 = dayHead;

        while (ptr1->next != lptr)
            {
                if (HOUR_TO_SEC(ptr1->meeting_start_time.tm_hour) + MIN_TO_SEC(ptr1->meeting_start_time.tm_min) >
                    HOUR_TO_SEC(ptr1->next->meeting_start_time.tm_hour) +
                    MIN_TO_SEC(ptr1->next->meeting_start_time.tm_min))
                    {
                        swap(ptr1, ptr1->next);
                        swapped = 1;
                    }
                    ptr1 = ptr1->next;
            }
            lptr = ptr1;
    }
    while (swapped);
}

/*-------------------------------SORTING FUNCTIONALITY END-------------------------------*/

//Linker takes each day and creates a single linked list of sorted and error checked meetings that will be passed into Program_Runtime.c
struct token * ZOOMer::linker(struct token *monday_head, struct token *tuseday_head, struct token *wednesday_head, struct token *thursday_head,
                             struct token *friday_head, struct token *saturday_head, struct token *sunday_head)
{
    struct token *complete_session = monday_head;

    //Creates a looped linked list ready to be run
    complete_session->Child     = tuseday_head;
    tuseday_head->Child         = wednesday_head;
    wednesday_head->Child       = thursday_head;
    thursday_head->Child        = friday_head;
    friday_head->Child          = saturday_head;
    saturday_head->Child        = sunday_head;
    sunday_head->Child          = complete_session;

    return complete_session;
}

/*-------------------------------REAPEATER FUNCTIONALITY END-------------------------------*/

//Checks if the repeater buttons are selected and if so adds 1 to the index of an array (week)
static vector<int> find_days_to_replace(QCheckBox *monday_b, QCheckBox *tuesday_b, QCheckBox *wednesday_b,
                                        QCheckBox *thrusday_b, QCheckBox *friday_b, QCheckBox *saturday_b,
                                        QCheckBox *sunday_b)
{
    vector<int> arr(10);

    if (monday_b->isChecked())
        arr[0] = 1;

    if (tuesday_b->isChecked())
        arr[1] = 1;

    if (wednesday_b->isChecked())
        arr[2] = 1;

    if (thrusday_b->isChecked())
        arr[3] = 1;

    if (friday_b->isChecked())
        arr[4] = 1;

    if (saturday_b->isChecked())
        arr[5] = 1;

    if (sunday_b->isChecked())
        arr[6] = 1;

    return arr;
}

//Fucntion assigns all data from b into a
static void assign_token(struct token * a, struct token * b)
{
    a->meeting_start_time.tm_hour = b->meeting_start_time.tm_hour;
    a->meeting_start_time.tm_min = b->meeting_start_time.tm_min;

    a->meeting_end_time.tm_hour = b->meeting_end_time.tm_hour;
    a->meeting_end_time.tm_min = b->meeting_end_time.tm_min;

    a->URL = b->URL;
    a->name = b->name;
}

//Overloaded function that adds a new day (int)
static void assign_token(struct token * a, struct token * b, int new_day)
{
    a->meeting_start_time.tm_hour = b->meeting_start_time.tm_hour;
    a->meeting_start_time.tm_min = b->meeting_start_time.tm_min;

    a->meeting_end_time.tm_hour = b->meeting_end_time.tm_hour;
    a->meeting_end_time.tm_min = b->meeting_end_time.tm_min;

    a->URL = b->URL;
    a->name = b->name;

    a->meeting_start_time.tm_wday = new_day;
    a->meeting_end_time.tm_wday = new_day;
}

//Function takes a linked list of tokens and copies them into a list with a differant address
struct token * ZOOMer::reassign_list(struct token * list, int dd)
{
    int m_index = dd;
    struct token * current = list;
    struct token * copy = (struct token *) malloc(sizeof (struct token));
    assign_token(copy, current);

    copy->next = NULL;

    // Keep track of first element of the copy.
    struct token * const head = copy;

    current = current->next;

    while(current != NULL)
    {
        copy = copy->next = (struct token *) malloc(sizeof (struct token));

        assign_token(copy, current, dd);

        //Updates total days in array
        if(m_index == 0)
            meetings[6] += 1;
        else
            meetings[m_index - 1] += 1;

        copy->URL = current->URL;
        copy->next = NULL;

        current = current->next;
    }
    return head;
}

//Function returns the prev node
void ZOOMer::push_list(struct token* head, struct token * list, int new_day)
{
    //Assigns data to first node
    assign_token(head, list);

    head->next = reassign_list(list, new_day)->next;
}

//Finds the day within Session that will be repeated
static struct token * find_day(struct token *Session, int day)
{
    int day_counter = 1;

    while (day_counter++ != day)
        Session = Session->Child;

    return Session;
}

int getIndex(int w_day)
{
    (w_day == 0) ? w_day = 0 : w_day--;
    return w_day;
}

//Function takes QCheckBoxes and a list selector to deterimae weather a certain day need to be reapeated
//Acorss the session

//ERROR - WHEN MORE THAN ONE LIST IN A DAY THE LAST LIST WILL NOT BE CARRIED OVER IN THE REPEAT
//ERROR - IF THERE IS ONLY ONE IT DOES NOT GET REPEATED
//ISSUE - THE SWAP OVER TO ALLOCATING MEMORY FOR A DAY THAT IS NULL COULD HAVE INTERFEARD WITH THE PROCESS
struct token * ZOOMer::repeater(struct token *Session, QComboBox *dayToRepeat,
                       QCheckBox *monday_b, QCheckBox *tuesday_b, QCheckBox *wednesday_b,
                       QCheckBox *thursday_b, QCheckBox *friday_b, QCheckBox *saturday_b,
                       QCheckBox *sunday_b)
{
    //qDebug() << dayToRepeat->currentData();
    if (dayToRepeat->currentText() != "Select Day")
    {
        int index = 0;
        int t_days = 7;
        int counter = 0;
        struct token * day_2_repeat = find_day(Session, dayToRepeat->currentIndex());

        int vec_index = getIndex(day_2_repeat->meeting_start_time.tm_wday);
        //TODO Error if user chooses NULL day to repeat

        //Looks at which check box had been selected
        vector<int> l2re = find_days_to_replace(monday_b, tuesday_b, wednesday_b,
                                                thursday_b, friday_b, saturday_b,
                                                sunday_b);
        //If combo button of the same day that is repeated is pressed, does not update
        if(l2re[vec_index] == 1)
            l2re[vec_index] -= 1;

        while (counter++ != t_days)
        {
            if (l2re[index++])
            {
                //Pushes the new list to occupy the choosen day
                push_list(Session, day_2_repeat, Session->meeting_start_time.tm_wday);
            }
            Session = Session->Child;
        }
    }
    return Session;
}
/*-------------------------------REAPEATER FUNCTIONALITY END-------------------------------*/

/*-------------------------------LOADERS-------------------------------*/

//Loads new info page for meeting
static QWidget *loadUiFile(QWidget *parent)
{
    QFile file("/Users/tobeyragain/Argon Galactic/Projects/ZOOMer/system/gui_osx/ZOOMer/meetinginfowidget.ui");
    file.open(QIODevice::ReadOnly);

    QUiLoader loader;
    return loader.load(&file, parent);
}

static QWidget *loadMaxUiFile(QWidget *parent)
{
    QFile file("/Users/tobeyragain/Argon Galactic/Projects/ZOOMer/system/gui_osx/ZOOMer/maxmeeting.ui");
    file.open(QIODevice::ReadOnly);

    QUiLoader loader;
    return loader.load(&file, parent);
}
/*-------------------------------LOADERS END-------------------------------*/

/*-------------------------------NAV FUNCTIONS-------------------------------*/

//Creates a new page in the specifed meeting head
void ZOOMer::newMeeting(QStackedWidget *meetingHead)
{
    QWidget *newPage = new QWidget;


    //ZOOMer has max of 100 meetings perday
    if(meetingHead->count() > 100)
    {
        delete(newPage);
        return;
    }
    //Loads info page about max files
    else if(meetingHead->count() == 100)
    {
        loadMaxUiFile(newPage);
        meetingHead->insertWidget(meetingHead->count() + 1, newPage);
        meetingHead->setCurrentIndex(meetingHead->count() - 1);
        meetingHead->show();
        return;
    }

    //Loeads new meeting info page
    loadUiFile(newPage);
    meetingHead->insertWidget(meetingHead->count() + 1, newPage);
    meetingHead->setCurrentIndex(meetingHead->count() - 1);
    meetingHead->show();
}

//Traverses forward through list
void ZOOMer::moveForward(QStackedWidget *meetingHead)
{
    if (meetingHead->currentIndex() != meetingHead->count() - 1)
    {
        meetingHead->setProperty("opacity", 0);
        QGraphicsOpacityEffect *effect = new QGraphicsOpacityEffect(meetingHead);
        meetingHead->setGraphicsEffect(effect);
        QPropertyAnimation *animation = new QPropertyAnimation(effect, "opacity", this);

        animation->setDuration(1000);
        animation->setStartValue(0);
        animation->setEndValue(1);
        animation->start();
    }
    meetingHead->setCurrentIndex(meetingHead->currentIndex() + 1);
}

//Traverses baclwards through list
void ZOOMer::moveBack(QStackedWidget *meetingHead)
{
    if (meetingHead->currentIndex() != 0)
    {
        meetingHead->setProperty("opacity", 0);
        QGraphicsOpacityEffect *effect = new QGraphicsOpacityEffect(meetingHead);
        meetingHead->setGraphicsEffect(effect);
        QPropertyAnimation *animation = new QPropertyAnimation(effect, "opacity", this);

        animation->setDuration(1000);
        animation->setStartValue(0);
        animation->setEndValue(1);
        animation->start();
    }
    meetingHead->setCurrentIndex(meetingHead->currentIndex() - 1);

}

//Removes page user is currently on
void ZOOMer::removePage(QStackedWidget *meetingHead)
{
    if (meetingHead->count() > 1)
    {
        meetingHead->removeWidget(meetingHead->currentWidget());
        //meetingHead->deleteLater();
        //TODO make sure meetings are completely deleted
    }
}

/*-------------------------------LIST DISPLAY-------------------------------*/
QString get_list_format(struct tm start_t, struct tm end_t, QString meeting_name)
{
    QString day_o_t = "AM";

    QString name_of_day;
    QString full_format;

    //Finds the name of a day from the tm struct
    switch (start_t.tm_wday)
    {
        case 1:
            name_of_day = QString("Monday:");
            break;
        case 2:
            name_of_day = QString("Tuesday:");
            break;
        case 3:
            name_of_day = QString("Wednesday:");
            break;
        case 4:
            name_of_day = QString("Thrusday:");
            break;
        case 5:
            name_of_day = QString("Friday:");
            break;
        case 6:
            name_of_day = QString("Saturday:");
            break;
        case 0:
            name_of_day = QString("Sunday:");
            break;
    }

    full_format.append(name_of_day);
    full_format.append(" " + meeting_name);
    full_format.append(" | Start ");

   if(start_t.tm_hour >= 12)
    {
        start_t.tm_hour -= 12;
        day_o_t = "PM";
    }

    full_format.append(QString::number(start_t.tm_hour) + ":");

    if(start_t.tm_min < 10)
        full_format.append(QString::number(start_t.tm_min) + "0");
    else
        full_format.append(QString::number(start_t.tm_min));

    full_format.append(" " + day_o_t);
     full_format.append(" | End ");


    full_format + "| End ";

    if(end_t.tm_hour >= 12)
     {
         end_t.tm_hour -= 12;
         day_o_t = "PM";
     }
    else
        day_o_t = "AM";

     full_format.append(QString::number(end_t.tm_hour) + ":");

     if(end_t.tm_min < 10)
         full_format.append(QString::number(end_t.tm_min) + "0");
     else
         full_format.append(QString::number(end_t.tm_min));

     full_format.append(" " + day_o_t);


    return full_format;
}

bool ZOOMer::create_error_list(QListView * list, struct token * sorted_session)
{
    //Load new qss file
    QFile list_f("/Users/tobeyragain/Argon Galactic/Projects/ZOOMer/system/gui_osx/ZOOMer/list_closed.qss");
    if(list_f.open(QIODevice::ReadOnly))
        {
            QTextStream textStream(&list_f);
            QString styleSheet = textStream.readAll();
            list_f.close();
            list->setStyleSheet(styleSheet);
        }

    list->setSpacing(6);

    int nrow = 0;
    int total_wk_d = 7;
    int index = 0;
    bool hasError = false;

    model_error = new QStandardItemModel( nrow, 1, this );

    for(int r = 0; r < total_wk_d; r++)
    {
        struct token * temp = sorted_session;

        //If the day is NULL skip
        if(sorted_session == NULL)
            continue;


        //Loops through each meeting
        for(int z = 0; z < meetings[r]; z++)
        {
            //If NULL skip or If there are NO meetings
            if(temp == NULL || meetings[r] == 0)
                continue;

            int s_sec = HOUR_TO_SEC(temp->meeting_start_time.tm_hour) + MIN_TO_SEC(temp->meeting_start_time.tm_min);
            int e_sec = HOUR_TO_SEC(temp->meeting_end_time.tm_hour) + MIN_TO_SEC(temp->meeting_end_time.tm_min);

            //Checks to make sure meeting dose not end before start
            if(s_sec == e_sec)
            {
                QStandardItem *item = new QStandardItem("ERROR - Meeting can't have equal launch/end times");
                ADD_TO_ERROR;
                hasError = true;
            }

            if(s_sec > e_sec)
            {
                QStandardItem *item = new QStandardItem("ERROR - Cannot start before end");
                ADD_TO_ERROR;
                hasError = true;
            }

            if(temp->next != NULL)
            {
                int s_sec_next = HOUR_TO_SEC(temp->next->meeting_start_time.tm_hour) + MIN_TO_SEC(temp->next->meeting_start_time.tm_min);
                int e_sec_next = HOUR_TO_SEC(temp->next->meeting_end_time.tm_hour) + MIN_TO_SEC(temp->next->meeting_end_time.tm_min);

                //Checks if two meeting start at the same time
                if(s_sec == s_sec_next)
                {
                    QStandardItem *item = new QStandardItem("ERROR - Multipe meetings with same start/stop time");
                    ADD_TO_ERROR;
                    hasError = true;
                }

                 //Checks if one meeting end time is less than the previous one
                if(e_sec > e_sec_next)
                {
                    QStandardItem *item = new QStandardItem("ERROR - Overlap with another meeting");
                    ADD_TO_ERROR;
                    hasError = true;
                }
            }
            temp = temp->next;
        }
        sorted_session = sorted_session->Child;
    }
    list->setModel(model_error);

    return hasError;
}

void ZOOMer::create_info_list(QListView * list, struct token * Session)
{
    list->setSpacing(6);

    //Load new qss file
    QFile list_f("/Users/tobeyragain/Argon Galactic/Projects/ZOOMer/system/gui_osx/ZOOMer/list_running.qss");
    if(list_f.open(QIODevice::ReadOnly))
        {
            QTextStream textStream(&list_f);
            QString styleSheet = textStream.readAll();
            list_f.close();
            list->setStyleSheet(styleSheet);

        }
    /*set number of row and column, listview only support 1 column */
    int nrow = meetings[0];
    int total_wk_d = 7;
    int index = 0;

    model = new QStandardItemModel( nrow, 1, this );

    for(int r = 0; r < total_wk_d; r++)
    {
        struct token * temp = Session;

        //Loops through each meeting
        for(int z = 0; z < meetings[r]; z++)
        {
            //If there are NO meetings
            if(meetings[r] == 0)
                continue;
            QString sstr = get_list_format(temp->meeting_start_time, temp->meeting_end_time, "TEST");

            qDebug() << sstr;
            QStandardItem *item = new QStandardItem(sstr);
            model->setItem(index++, 0, item);
            temp = temp->next;
        }
        Session = Session->Child;
    }
    list->setModel(model);
}

/*-------------------------------LIST DISPLAY END-------------------------------*/

/*-------------------------------READ IN-------------------------------*/

//Reads in a signle day of meeting and creates a linked list from tokens
//If meeting has NO url it is defined as NULL
//ERROR - IF A DAY IS FARTHER OUT THAN TUESDAY THE BEHAVIOR BECOMES UNDEFINED HAS LEAD TO CRASHES
struct token * ZOOMer::readIn(QStackedWidget *currentDay, int w_day)
{
    struct token * head = nullptr;

    int index = 0;
    int day_tot_meeting = 0;

    for(int i = 0; i < currentDay->count(); i++)
    {
        currentDay->setCurrentIndex(index++);

        //Finds widgets in current tab
        QTimeEdit *startTime = currentDay->findChild<QTimeEdit *>("start_time");
        QTimeEdit *endTime   = currentDay->findChild<QTimeEdit *>("end_time");
        QLineEdit *url       = currentDay->findChild<QLineEdit *>("meeting_url");
        QLineEdit *name      = currentDay->findChild<QLineEdit *>("meeting_name");

        //If URL frield is empty do not allocate a new meeting
        if(url->text().isEmpty())
            continue;

        struct token * new_node = (struct token *) malloc(sizeof(struct token));

        meetings[RUNS] += 1;

        //Reads starting time
        new_node->meeting_start_time.tm_hour = startTime->time().hour();
        new_node->meeting_start_time.tm_min = startTime->time().minute();
        new_node->meeting_start_time.tm_wday = w_day;

        //Reads ending time
        new_node->meeting_end_time.tm_hour = endTime->time().hour();
        new_node->meeting_end_time.tm_min = endTime->time().minute();
        new_node->meeting_end_time.tm_wday = w_day;

        //ERROR - SCANNING IN A QSTRING AND CONVERTING IT OVER TO CHAR LITERAL
        //RESULTS IN UNDEVIED BEHAVIOR
        new_node->URL = url->text().toLatin1().data();
        new_node->name = name->text().toLatin1().data();

        new_node->next = head;
        head = new_node;
    }

    //If the includes has not meeting allocate space for a NULL day and return that day
    //
    if(head == NULL)
    {
        struct token * nothing = (struct token *) malloc(sizeof(struct token));
        nothing->meeting_start_time.tm_wday = w_day;
        nothing->next = NULL;
        return nothing;
    }

    sortDay(head);

    RUNS++;
    return head;
}

/*-------------------------------READ IN END-------------------------------*/


