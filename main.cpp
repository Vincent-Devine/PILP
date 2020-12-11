#include "gcpi.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Gcpi w;
    w.show();
    return a.exec();
}
