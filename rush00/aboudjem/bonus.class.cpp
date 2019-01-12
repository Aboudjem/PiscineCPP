#include "bonus.class.hpp"

Bonus::Bonus(void) {
    return ;
}

Bonus::~Bonus(void) {
    return ;
}

Bonus& Bonus::operator=(Bonus const &rhs){
    this->_explosion = rhs._explosion;
    this->_invincible = rhs._invincible;
    this->_live = rhs._live;
    return *this;
}

Bonus::Bonus(Bonus const &src) {
    return ;
}
