#ifndef MEETINGINFOWIDGET_H
#define MEETINGINFOWIDGET_H

#include <QWidget>


namespace Ui {
class MeetingInfoWidget;
}

class MeetingInfoWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MeetingInfoWidget(QWidget *parent = nullptr);
    ~MeetingInfoWidget();

private slots:
    void on_launch_url_clicked();

private:
    Ui::MeetingInfoWidget *ui;
};

#endif // MEETINGINFOWIDGET_H
