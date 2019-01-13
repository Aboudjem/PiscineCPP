#ifndef OBSTACLE_CLASS_HPP
#define OBSTACLE_CLASS_HPP

#include "entity.class.hpp"
#include "Map.class.hpp"
#include "game.class.hpp"

class Obstacle : public Entity {
public:
    Obstacle(void);
    Obstacle(int number);
    ~Obstacle(void);
    Obstacle &operator=(Obstacle const &rhs);
    Obstacle(Obstacle const &src);

    char			getSkin(void) const;
    void			setSkin(char skin);

    int				Move(Map *map);
    void			Print(void);

private:
    char		    _skin;
};

#endif //OBSTACLE_CLASS_HPP
