#include "zoomerwin.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ZOOMerWin w;
    w.show();
    return a.exec();
}
