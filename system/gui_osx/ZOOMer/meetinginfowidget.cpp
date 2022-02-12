#include "meetinginfowidget.h"
#include "ui_meetinginfowidget.h"
#include "zoomer.h"


MeetingInfoWidget::MeetingInfoWidget(QWidget *parent) :
        QWidget(parent),
        ui(new Ui::MeetingInfoWidget)
{
    ui->setupUi(this);
}

MeetingInfoWidget::~MeetingInfoWidget()
{
    delete ui;
}


void MeetingInfoWidget::on_launch_url_clicked()
{
    qDebug() << "URL pressed";
}
