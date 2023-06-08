#include "mainwindow.h"
#include "loginwindow.h"
#include "users.h"
#include "QWidget"
#include"QLineEdit"
#include <QApplication>
#include <QString>
#include "QDebug"
#include "QEvent"
using namespace std;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;


    w.show();








return a.exec();
}
