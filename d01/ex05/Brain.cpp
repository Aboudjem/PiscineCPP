#include "Brain.hpp"

std::string Brain::identify() const{
    std::stringstream addr;
    addr << this;
    return (addr.str());
}

Brain::Brain(void){
    return;
}


Brain::~Brain(void){
    return;
}
