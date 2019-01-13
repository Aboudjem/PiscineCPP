#ifndef GAME_CLASS_HPP
#define GAME_CLASS_HPP

#include <ctime>
//#include <time.h>

class Game {
public:
    Game(void);
    ~Game(void);
    Game &operator=(Game const &rhs);
    Game(Game const &src);
    Game(unsigned int score, int time, int lives, int difficult, int background);

    unsigned int	getScore(void) const;
    void			setScore(unsigned int score);
    int				getTime(void) const;
    void			setTime(int time);
    int				getLives(void) const;
    void			setLives(int lives);
    int				getDifficult(void) const;
    void			setDifficult(int difficult);
    int				getBackground(void) const;
    void			setBackground(int background);
private:
    unsigned int    _score;
    time_t          _time;
    int             _lives;
    int             _difficult;
    int             _background;
};

#endif //GAME_CLASS_HPP
