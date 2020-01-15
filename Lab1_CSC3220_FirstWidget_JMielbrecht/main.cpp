#include "textstylelab.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TextStyleLab w;
    w.show();
    return a.exec();
}
