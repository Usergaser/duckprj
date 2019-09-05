#ifndef DUCK_H
#define DUCK_H

#include <iostream>
#include "flybehavior.h"
#include "flywithwings.h"
#include "flynoway.h"
#include"quackalive.h"
#include"quackbehavior.h"

class Duck
{
protected:
    FlyBehavior *flyBehavior;
    QuackBehaviour *quackbehavior;
public:
    Duck();
    void performQuack();
    void performFly();
    void swim();
    virtual void display() = 0;
};

#endif // DUCK_H
