#include "Zombie.hpp"

void Zombie::announce(void) {

std::cout << "<" << this->_name << "(" << this->_type << ")> Braiiiiiiinnnssss..." << std::endl;
}

Zombie::Zombie(std::string type, std::string name) : _type(type), _name(name) {
    announce();
    return;
}

Zombie::~Zombie(void){
    return ;
}
