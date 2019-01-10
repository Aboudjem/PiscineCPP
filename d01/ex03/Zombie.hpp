#include <iostream>
#include <time.h>

class Zombie {
public:
    void	setZombieType(std::string type);
    void announce(void);
    Zombie(void);
    Zombie(std::string _type, std::string _name);
    ~Zombie(void);
private:
    std::string _type;
    std::string _name;

};


