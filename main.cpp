
#include <QApplication>
#include "kbc.h"
#include<startscreen.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    startscreen sc;
    sc.exec();
    kbc w;
    w.show();

    return a.exec();
}
