#ifndef DUCK_H
#define DUCK_H

#include <iostream>

class Duck
{
public:
    Duck();
    void quack();
    void swim();
    void fly();
    virtual void display() = 0;
};

#endif // DUCK_H
