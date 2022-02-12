#ifndef ZOOMERWIN_H
#define ZOOMERWIN_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class ZOOMerWin; }
QT_END_NAMESPACE

class ZOOMerWin : public QMainWindow
{
    Q_OBJECT

public:
    ZOOMerWin(QWidget *parent = nullptr);
    ~ZOOMerWin();

private:
    Ui::ZOOMerWin *ui;
};
#endif // ZOOMERWIN_H
