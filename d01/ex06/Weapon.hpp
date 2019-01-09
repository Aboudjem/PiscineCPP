#include <iostream>
#include "HumanA.hpp"
#include "HumanB.hpp"


class Weapon {
private:
    std::string _type;
public:
    std::string const getType();
    void setType(std::string type);
    Weapon(void);
    ~Weapon(void);
};