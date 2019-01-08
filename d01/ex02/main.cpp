#include "ZombieEvent.hpp"

int main(){
    ZombieEvent zebi;
    zebi.setZombieType("Undead");

    Zombie *test = zebi.newZombie("abc");
    zebi.randomChump();

    delete test;
}