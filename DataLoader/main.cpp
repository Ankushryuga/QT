#include "dataloader.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DataLoader w;
    w.show();
    return a.exec();
}
