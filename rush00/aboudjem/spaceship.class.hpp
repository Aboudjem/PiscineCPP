#ifndef SPACESHIP_CLASS_HPP
#define SPACESHIP_CLASS_HPP

#include <iostream>
#include "entity.class.hpp"
#include "weapon.class.hpp"


class Spaceship : public Entity {
public:
    Spaceship(void);
    ~Spaceship(void);
    Spaceship(std::string _playername);
    Spaceship &operator=(Spaceship const &rhs);
    Spaceship(Spaceship const &src);

    Weapon			getWeapon(void) const;
    void			setWeapon(Weapon &weapon);
    void			Shoot(void);
    void            Move(void);
private:
    Weapon _weapon;
};

#endif //SPACESHIP_CLASS_HPP
