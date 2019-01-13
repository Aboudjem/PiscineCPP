#ifndef SPACESHIP_CLASS_HPP
#define SPACESHIP_CLASS_HPP

#include <iostream>
#include "entity.class.hpp"
#include "weapon.class.hpp"
#include "Map.class.hpp"


class Spaceship : public Entity {
public:
    Spaceship(void);
    ~Spaceship(void);
    Spaceship(std::string _playername);
    Spaceship &operator=(Spaceship const &rhs);
    Spaceship(Spaceship const &src);


    Weapon			getWeapon(void) const;
    void			setWeapon(Weapon &weapon);
    char			getSkin(void) const;
    void			setSkin(char skin);
    void			Shoot(void);
    int				Move(int key, int init_y, Map *map);
    void			Print(Map *map);
private:
    Weapon _weapon;
    char			_skin;
};

#endif //SPACESHIP_CLASS_HPP
