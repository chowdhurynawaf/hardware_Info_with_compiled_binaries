#include "systeminfo.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SystemInfo w;
    w.show();
    return a.exec();
}
