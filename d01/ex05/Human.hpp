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