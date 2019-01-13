#ifndef ENEMY_CLASS_HPP
#define ENEMY_CLASS_HPP

#include "entity.class.hpp"
#include "game.class.hpp"
class Enemy : public Entity {
public:
    Enemy(void);
    ~Enemy(void);
    Enemy &operator=(Enemy const &rhs);
    Enemy(Enemy const &src);
    void    move( void);
    void    shoot(void);
    void    getWeapon(void);
    void    setEnemy(std::string name, int canMove, unsigned int skin, int boss, int pts);
    void    displayEnemy(void);
    void    dead(Game *score);
    void    disappear(void);
    void    appear(void);
private:
    std::string     _name;
    int             _canMove;
    Weapon          _weapon;
    unsigned int    _skin;
    int             _boss;
    int             _pts;
};

#endif //ENEMY_CLASS_HPP
