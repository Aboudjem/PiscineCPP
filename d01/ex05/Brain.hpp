#include <iostream>
#include <sstream>

class Brain {
private:
    int _size;

public:
    std::string identify() const;
    Brain(void);
    ~Brain(void);
};