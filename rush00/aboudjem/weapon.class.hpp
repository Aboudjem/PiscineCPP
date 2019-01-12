#ifndef WEAPON_CLASS_HPP
#define WEAPON_CLASS_HPP

#include <iostream>

class Weapon {
public:
    Weapon(void);
    ~Weapon(void);
    Weapon &operator=(Weapon const &rhs);
    Weapon(Weapon const &src);
void    SetWeapon(std::string name, int rate, int dmg, int missiles, int skin, int size);
void    SetDmg(int dmg);
void    SetRate(int rate);
void    SetMissiles(int missiles);
void    SetSkin(int skin);
int     GetDmg(void);
int     GetRate(void);
int     GetMissiles(void);
int     GetSkin(void);
int     GetSize(void);
void    Display(void);

private:
    std::string     _name;
    int             _rate;
    int             _dmg;
    int             _missiles; // nb of missiles
    int             _skin;
    int             _size;
};

#endif
