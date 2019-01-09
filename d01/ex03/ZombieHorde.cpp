#include "ZombieHorde.hpp"


ZombieHorde::ZombieHorde(int n) {
    this->_Zombies = new Zombie[n];
    this->_nb = n;
    return;
}

ZombieHorde::~ZombieHorde() {
    {
        delete[] _Zombies;
        std::cout << "Horde Deleted" << std::endl;
    }
}

void ZombieHorde::announce() {
    int i = 0;
    while (i < this->_nb)
        _Zombies[i++].announce();
}