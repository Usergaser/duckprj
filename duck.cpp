#include "duck.h"

Duck::Duck()
{

}
void Duck::performQuack(){
    quackbehavior->quack();
}

void Duck::performFly() {
    flyBehavior->fly();
}

void Duck::swim() {
    std::cout << "All ducks float, even decoys" << std::endl;
}
