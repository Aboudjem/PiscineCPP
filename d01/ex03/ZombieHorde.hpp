#include "Zombie.hpp"

class ZombieHorde {

public:
    std::string type;
    void	setZombieType(std::string type);
    Zombie* newZombie(std::string name);
    Zombie randomChump(void);
    ZombieHorde(int n);
    ~ZombieHorde(void);
};
