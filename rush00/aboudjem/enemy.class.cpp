#include "enemy.class.hpp"


Enemy::Enemy(void) : Entity() {
    return ;
}

Enemy::~Enemy(void) {
    std::cout << "Enemy has been destroyed" << std::endl;
}

Enemy& Enemy::operator=(Enemy const &rhs){
    this->_weapon = rhs._weapon;
    this->_skin = rhs._skin;
    this->_boss = rhs._boss;
    this->_pts = rhs._pts;
    this->_canMove = rhs._canMove;
    return *this;
}

void    Enemy::setEnemy(std::string name, int canMove, unsigned int skin, int boss, int pts) {
    this->_name = name;
    _canMove = canMove;
    _skin = skin;
    _boss = boss;
    _pts = pts;
}

void    Enemy::displayEnemy() {
        std::cout << "\nEnemy: "<< this->_name << std::endl;
        std::cout << "HP                    : " << this->getHp()<< std::endl;
        std::cout << "Size:                 : " << this->getSize()<< std::endl;
        std::cout << "HasWeapon             : " << this->getHasWeapon()<< std::endl;
        std::cout << "Speed                 : " << this->getSpeed()<< std::endl;
        std::cout << "Can move vertically   : " << (_canMove == 1 ? "Yes" : "No")  << std::endl;
        std::cout << "Skin                  : " << _skin << std::endl;
        std::cout << "BOSS                  : " << (_boss == 1 ? "Yes" : "No")  << std::endl;
        std::cout << "Pts worth             : " << _pts  << std::endl;
}

Enemy::Enemy(Enemy const &src) {
    return ;
}

void    Enemy::getWeapon(void){
    this->_weapon.Display();
}

void   Enemy::move() {
    int x = getX();

    Entity::setX(x--);
    std::cout << getX() << std::endl;
    if (this->_canMove == 1)
        std::cout << "Can move Horizontally" << std::endl;
}

void Enemy::dead(Game *score) {
    unsigned int temp = score->getScore();
    score->setScore(temp + this->_pts);

    std::cout << this->_name << " is dead, your score is now " << score->getScore() << "(+" << this->_pts << ") pts." << std::endl;
//    delete this;
}
