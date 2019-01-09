#include "ZombieHorde.hpp"

int main() {
    int nb;
    std::cout << "How many Zombies would you like to generate?" << std::endl;
    std::cin >> nb;

    ZombieHorde Zebi(nb);
    Zebi.announce();
    }