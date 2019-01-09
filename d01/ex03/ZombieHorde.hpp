#include "Zombie.hpp"

class ZombieHorde {
private:
    int         _nb;
    Zombie*     _Zombies;
public:
    void	setZombieType(std::string type);
    Zombie*     newZombie(std::string name);
    Zombie      randomChump(void);
    void        announce(void);
    ZombieHorde(int n);
    ~ZombieHorde(void);
};
