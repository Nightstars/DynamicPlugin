#include "testplugin.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    testplugin w;
    w.show();
    return a.exec();
}
