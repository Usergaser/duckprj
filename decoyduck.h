#ifndef DECOYDUCK_H
#define DECOYDUCK_H

#include "duck.h"

class DecoyDuck : public Duck
{
public:
    DecoyDuck();
    void quack();
    void fly();
    void display();
};

#endif // DECOYDUCK_H
