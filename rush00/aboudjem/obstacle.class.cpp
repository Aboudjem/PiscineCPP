#include "obstacle.class.hpp"

Obstacle::Obstacle(void) : Entity() {
    this->_x = (MAP_X - 1);
    this->_y = (20); // FAIRE UN RAND POUR Y
    this->_skin = 'O';
    this->_time = time(NULL) * 1000;
    return ;
}

Obstacle::~Obstacle(void) {
    return ;
}

Obstacle& Obstacle::operator=(Obstacle const &rhs){
    Entity::operator=(rhs);
    this->_skin = rhs.getSkin();
    return *this;
}

Obstacle::Obstacle(Obstacle const &src) {
    *this = src;
    return ;
}

char				Obstacle::getSkin(void) const
{
    return (this->_skin);
}

void				Obstacle::setSkin(char skin)
{
    this->_skin = skin;
}

void				Obstacle::Print(void)
{
    mvaddch(this->_y, this->_x, this->_skin);
}

int					Obstacle::Move(Map *map)
{
    if (clock() - this->_time < 13000)
        return (0);
    this->_time = clock();
    if (map->checkCollision(this->_y, this->_x, OBS) == 1)
        return (1);
    move(this->_y, this->_x);
    clrtoeol();
    map->setPosition(this->_y, this->_x, 0);
    if (this->_x > -1)
    {
        this->_x -= 1;
        map->setPosition(this->_y, this->_x, OBS);
    }
    this->Print();
    if (map->checkCollision(this->_y, this->_x, OBS) == 1)
        return (1);
    return (0);
}
