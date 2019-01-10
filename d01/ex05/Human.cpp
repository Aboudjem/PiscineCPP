#include "Human.hpp"

Human::Human(){
    return;
}

Human::~Human(){
    return;
}

std::string Human::identify(void)
{
    return (_Brain.identify());
}

Brain const &Human::getBrain(void)
{
    return this->_Brain;
}
