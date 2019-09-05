#include "mallardduck.h"

MallardDuck::MallardDuck()
{
    flyBehavior = new FlyWithWings();
    quackbehavior = new quackalive();
}

void MallardDuck::display() {
    std::cout << "I'am a real Mallard duck" << std::endl;
}
