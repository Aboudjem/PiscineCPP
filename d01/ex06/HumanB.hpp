#include "Weapon.hpp"

class HumanB {
private:
    Weapon _weapon;
    std::string name;
public:
    std::string type;
    std::string const getType();
    std::string setType();
    void attack(void);
};