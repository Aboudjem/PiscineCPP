#include "spaceship.class.hpp"

Spaceship::Spaceship(void)
{
    this->_y = 10;
    this->_x = 0;
    this->_skin = '>';
}

Spaceship::Spaceship(std::string _playername): Entity()
{
	this->_name = _playername;
    this->_y = 10;
    this->_x = 0;
    this->_skin = '>';
}

Spaceship::Spaceship(Spaceship const &src)
{
	*this = src;
}

Spaceship::~Spaceship(void)
{
	std::cout << "Spaceship has been destroyed" << std::endl;
}

Spaceship&				Spaceship::operator=(Spaceship const &rhs)
{
    Entity::operator=(rhs);
    this->_weapon = rhs.getWeapon();
    this->_skin = rhs.getSkin();
    return *this;
}

void					Spaceship::Print(Map *map)
{
    move(this->_y, this->_x);
    map->setPosition(this->_y, this->_x, PLAYER);
    addch(this->_skin);
}


Weapon					Spaceship::getWeapon(void) const
{
	return (this->_weapon);
}

void					Spaceship::setWeapon(Weapon &weapon)
{
	this->_weapon = weapon;
}

int						Spaceship::Move(int key, int init_y, Map *map)
{
    if (key == 65)
    {
        if (this->_y > init_y + 1)
        {
            move(this->_y, this->_x);
            clrtoeol();
//			mvdelch(this->_y(), this->_x());
            map->setPosition(this->_y, this->_x, 0);
//			collision[this->_y][this->_x] = 0;
            this->setY(this->_y - 1);
            if (map->checkCollision(this->_y, this->_x, PLAYER) == 1)
                return (1);
//			if (collision[this->_y][this->_x] > 1)
        }
    }
    if (key == 66)
    {
        if (this->_y < MAP_Y - init_y)
        {
            move(this->_y, this->_x);
            clrtoeol();
//			mvdelch(this->_y(), this->_x());
            map->setPosition(this->_y, this->_x, 0);
            this->setY(this->_y + 1);
            if (map->checkCollision(this->_y, this->_x, PLAYER) == 1)
                return (1);
        }
    }
    if (key == 68)
    {
        if (this->_x > 0)
        {
            move(this->_y, this->_x);
            clrtoeol();
//			mvdelch(this->_y(), this->_x());
            map->setPosition(this->_y, this->_x, 0);
            this->setX(this->_x - 1);
            if (map->checkCollision(this->_y, this->_x, PLAYER) == 1)
                return (1);
        }
    }
    if (key == 67)
    {
        if (this->_x < MAP_X - 1)
        {
            move(this->_y, this->_x);
            clrtoeol();
//			mvdelch(this->_y(), this->_x());
            map->setPosition(this->_y, this->_x, 0);
            this->setX(this->_x + 1);
            if (map->checkCollision(this->_y, this->_x, PLAYER) == 1)
                return (1);
        }
    }
    this->Print(map);
    return (0);
}

char					Spaceship::getSkin(void) const
{
    return (this->_skin);
}


void					Spaceship::setSkin(char skin)
{
    this->_skin = skin;
}