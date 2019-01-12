#ifndef OBSTACLE_CLASS_HPP
#define OBSTACLE_CLASS_HPP

class Obstacle : public Entity {
public:
    Obstacle(void);
    ~Obstacle(void);
    Obstacle &operator=(Obstacle const &rhs);
    Obstacle(Obstacle const &src);
private:
    unsigned int    _skin;
};

#endif //OBSTACLE_CLASS_HPP
