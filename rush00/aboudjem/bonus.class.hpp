#ifndef BONUS_CLASS_HPP
#define BONUS_CLASS_HPP

class Bonus {
public:
    Bonus(void);
    ~Bonus(void);
    Bonus &operator=(Bonus const &rhs);
    Bonus(Bonus const &src);
private:
    int             _live;
    int             _explosion;
    int             _invincible;
};

#endif //BONUS_CLASS_HPP
