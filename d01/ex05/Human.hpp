#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Brain.hpp"

class Human {
private:
    Brain _Brain;
public:
    std::string identify();
    Brain const &getBrain();
    Human(void);
    ~Human(void);
};

#endif
