#ifndef ENTITY_CLASS_HPP
#define ENTITY_CLASS_HPP

#include <iostream>
#include <ctime>
#include <ncurses.h>
#include "weapon.class.hpp"

class Entity {
public:
    Entity(void);
    ~Entity(void);
    Entity &operator=(Entity const &rhs);
    Entity(Entity const &src);
	std::string		getName(void) const;
	void			setName(std::string name);
	int				getHp(void) const;
	void			setHp(int hp);
	int				getSize(void) const;
	void			setSize(int size);
	int				getY(void) const;
	void			setY(int y);
	int				getX(void) const;
	void			setX(int x);
	int				getHasWeapon(void) const;
	void			setHasWeapon(int weapon);
	int				getSpeed(void) const;
	void			setSpeed(int speed);
	void			setEntity(unsigned int hp, unsigned int size, unsigned int hasWeapon, unsigned int speed);
protected:
	void			initialize(void);
    std::string     _name;
    unsigned int    _hp;
    unsigned int    _size;
    int             _y;
    int             _x;
    unsigned int    _hasWeapon;
    unsigned int    _speed;
};

#endif