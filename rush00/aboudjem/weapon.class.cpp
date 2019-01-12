#include "weapon.class.hpp"

Weapon::Weapon(void) {
    this->_rate = 1;
    this->_dmg = 1;
    this->_missiles = 1; // nb of missiles
    this->_skin = 1;
    this->_size = 1;
    return ;
}

Weapon::~Weapon(void) {
    std::cout << "Weapon has been destroyed" << std::endl;
}

Weapon& Weapon::operator=(Weapon const &rhs){
    this->_name = rhs._name;
    this->_dmg = rhs._dmg;
    this->_rate = rhs._rate;
    this->_missiles = rhs._missiles;
    this->_skin = rhs._skin;
    this->_size = rhs._size;
    return *this;
}

Weapon::Weapon(Weapon const &src) {
    *this = src;
    return ;
}

void    Weapon::SetWeapon(std::string name, int rate, int dmg, int missiles, int skin, int size) {
    this->_name = name;
    this->_rate = rate;
    this->_dmg = dmg;
    this->_missiles = missiles;
    this->_skin = skin;
    this->_size = size;
}

void    Weapon::SetDmg(int dmg) {
    this->_dmg = dmg;
}

void    Weapon::SetRate(int rate) {
    this->_rate = rate;
}

void    Weapon::SetMissiles(int missiles) {
    this->_missiles = missiles;
}

void    Weapon::SetSkin(int skin) {
    this->_skin = skin;
}

int Weapon::GetDmg(void)
{
    return _dmg;
}

int Weapon::GetRate(void)
{
    return _rate;
}

int Weapon::GetMissiles(void)
{
    return _missiles;
}

int Weapon::GetSkin(void)
{
    return _skin;
}

int Weapon::GetSize(void)
{
    return _size;
}

void Weapon::Display(void){
    std::cout << "\nNew weapon created: "<< this->_name << std::endl;
    std::cout << "Rate                  :" << this->_rate << std::endl;
    std::cout << "Damage                :" << this->_dmg << std::endl;
    std::cout << "Number of missiles    :" << this->_missiles  << std::endl;
    std::cout << "Skin                  :" << this->_skin  << std::endl;
    std::cout << "Missile size          :" << this->_size << std::endl;
}
