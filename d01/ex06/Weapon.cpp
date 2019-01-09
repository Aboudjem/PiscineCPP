#include "Weapon.hpp"

void    Weapon::setType(std::string type) {
    this->_type = type;
}

std::string const Weapon::getType() {
    std::string const &ref = _type;
    return (ref);
}

Weapon::Weapon(){
    return ;
}


Weapon::~Weapon(){
    return ;
}

