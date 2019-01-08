#include "Zombie.hpp"

void Zombie::announce(void) {

std::cout << "<" << this->_name << "(" << this->_type << ")> Braiiiiiiinnnssss..." << std::endl;
}

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type) {
    announce();
    return;
}

Zombie::~Zombie(void){
    return ;
}