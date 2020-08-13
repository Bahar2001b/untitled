#include "mainwindow.h"
#include <iostream>
#include <QApplication>

using namespace  std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    cout << "hiiiiiii "<< endl;

    // hellooooooooooooooooooooooooooooooooooooooo
    w.show();
    //mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm
    return a.exec();
}
