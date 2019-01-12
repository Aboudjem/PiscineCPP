#include "spaceship.class.hpp"

Spaceship::Spaceship(void)
{
	return ;
}

Spaceship::Spaceship(std::string _playername): Entity()
{
	this->_name = _playername;
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
	this->_weapon = rhs.getWeapon();
	return *this;
}

Weapon					Spaceship::getWeapon(void) const
{
	return (this->_weapon);
}

void					Spaceship::setWeapon(Weapon &weapon)
{
	this->_weapon = weapon;
}

void	Spaceship::Move(void) {
	std::cin.get();
}

int main(){
	Spaceship test;

//	test.Move();
}

