#include "Zombie.hpp"

void Zombie::setZombieType(std::string type) {
    this->_type = type;
}

void Zombie::announce(void) {
    std::cout << "<" << this->_name << "(" << this->_type << ")> Braiiiiiiinnnssss..." << std::endl;
}

Zombie::Zombie(std::string type, std::string name) : _type(type), _name(name) {
    announce();
    return;
}

Zombie::Zombie(void) {
    std::string names[11] = {"Abc", "Def", "Ghi", "Jkl", "Mno",
                             "Pqr", "Stu", "Vwx", "Xyz", "123", "321"};
    this->_name = names[(time(NULL) * rand()) % 11];
    this->setZombieType("Zebi");
    return;
}

Zombie::~Zombie(void) {
    return;
}
