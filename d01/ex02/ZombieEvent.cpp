#include "ZombieEvent.hpp"


void ZombieEvent::setZombieType(std::string type) {
    this->type = type;
}

Zombie ZombieEvent::randomChump() {
    std::string names[11] = {"Abc", "Def", "Ghi", "Jkl", "Mno",
            "Pqr", "Stu", "Vwx", "Xyz", "123", "321"};
    std::string name = names[(time(NULL) * rand()) % 11];
    return (Zombie(name, this->type));
}

Zombie* ZombieEvent::newZombie(std::string name){
    return(new Zombie(name, this->type));
}

ZombieEvent::ZombieEvent() {
    return;
}

ZombieEvent::~ZombieEvent(){
    return;
}
