#include "Zombie.hpp"

class ZombieEvent {

public:
    std::string type;
    void	setZombieType(std::string type);
    Zombie* newZombie(std::string name);
    Zombie randomChump(void);
    ZombieEvent(void);
    ~ZombieEvent(void);
};
