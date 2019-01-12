
#include "entity.class.hpp"

Entity::Entity(void)
{
}

Entity::Entity(Entity const &src)
{
	*this = src;
}

Entity::~Entity(void)
{
}

Entity&				Entity::operator=(Entity const &rhs)
{
	this->_name = rhs.getName();
	this->_hp = rhs.getHp();
	this->_size = rhs.getSize();
	this->_y = rhs.getY();
	this->_x = rhs.getX();
	this->_hasWeapon = rhs.getHasWeapon();
	this->_speed = rhs.getSpeed();
	return *this;
}

void				Entity::initialize(void)
{
	this->_name = "Entity";
	this->_hp = 0;
	this->_size = 1;
	this->_x = 0;
	this->_y = 0;
	this->_hasWeapon = 0;
	this->_speed = 0;
}

std::string			Entity::getName(void) const
{
	return (this->_name);
}

void				Entity::setName(std::string name)
{
	this->_name = name;
}

int					Entity::getHp(void) const
{
	return (this->_hp);
}

void				Entity::setHp(int hp)
{
	this->_hp = hp;
}

int					Entity::getSize(void) const
{
	return (this->_size);
}

void				Entity::setSize(int size)
{
	this->_size = size;
}

int					Entity::getY(void) const
{
	return (this->_y);
}

void				Entity::setY(int y)
{
	this->_y = y;
}

int					Entity::getX(void) const
{
	return (this->_x);
}

void				Entity::setX(int x)
{
	this->_x = x;
}

int					Entity::getHasWeapon(void) const
{
	return (this->_hasWeapon);
}

void				Entity::setHasWeapon(int weapon)
{
	this->_hasWeapon = weapon;
}

int					Entity::getSpeed(void) const
{
	return (this->_speed);
}

void				Entity::setSpeed(int speed)
{
	this->_speed = speed;
}

void				Entity::setEntity(unsigned int hp, unsigned int size, unsigned int hasWeapon, unsigned int speed){
	this->_hp = hp;
	this->_size = size;
	this->_hasWeapon = hasWeapon;
	this->_speed = speed;
}
