#include <QCoreApplication>
#include "duck.h"
#include "mallardduck.h"
#include"rubberduck.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Duck *mallard = new MallardDuck();
    mallard->performFly();
    mallard->performQuack();
    return a.exec();
}

