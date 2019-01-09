#include "Human.hpp"

std::string identify(void) {
//    _Brain.identify();
    return("k");
}

Human::Human(){
    return;
}

Human::~Human(){
    return;
}

std::string Human::identify(void)
{
    return this->_Brain.identify();
}

Brain const &Human::getBrain(void)
{
    return this->_Brain;
}