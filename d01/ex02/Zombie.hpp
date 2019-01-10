#include <iostream>
#include <time.h>

class Zombie {
public:
    void announce(void);
    Zombie(std::string type, std::string name);
    ~Zombie(void);

private:
    std::string _type;
    std::string _name;

};


