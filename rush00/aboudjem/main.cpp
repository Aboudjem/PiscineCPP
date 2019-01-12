#include "weapon.class.hpp"
#include "enemy.class.hpp"
#include <ctime>
#include <unistd.h>
Weapon *spaceship_weapons(){
    Weapon *weapons = new Weapon [6];
    weapons[0].SetWeapon("Basic", 1, 1, 1, 1, 1);

    weapons[1].SetWeapon("RapidFire", 5, 1, 1, 2, 1);

    weapons[2].SetWeapon("BlueFire", 1, 5, 1, 3, 1);

    weapons[3].SetWeapon("MultiCanon", 1, 1, 3, 4, 1);

    weapons[4].SetWeapon("Vortex", 3, 3, 3, 5, 2);

    weapons[5].SetWeapon("Conqueror", 10, 10, 3, 6, 3);

    return(weapons);
}


Enemy *generate_enemies(){
    srand(time(NULL));
    Enemy *enemies = new Enemy[11];
    enemies[0].setEntity(1, 3, 0, 1);
    enemies[0].setEnemy("Ship", 0, (rand() % 10), 0, 10);

    enemies[1].setEntity(2, 3, 0, 1);
    enemies[1].setEnemy("Ship++", 0, (rand() % 10), 0, 20);

    enemies[2].setEntity(3, 3, 1, 1);
    enemies[2].setEnemy("Basic++", 0, (rand() % 10), 0, 30);

    enemies[3].setEntity(4, 3, 0, 2);
    enemies[3].setEnemy("Dark", 0, (rand() % 10), 0, 40);

    enemies[4].setEntity(5, 1, 0, 1);
    enemies[4].setEnemy("Tempest", 0, (rand() % 10), 0, 50);

    enemies[5].setEntity(10, 3, 1, 1);
    enemies[5].setEnemy("BloodMesYeuks", 0, (rand() % 10), 0, 100);

    enemies[6].setEntity(20, 3, 1, 2);
    enemies[6].setEnemy("Queen Of Pain", 1, (rand() % 10), 0, 500);

    enemies[7].setEntity(30, 3, 1, 2);
    enemies[7].setEnemy("DarkTempest", 1, (rand() % 10), 1, 500);

    enemies[8].setEntity(40, 3, 1, 1);
    enemies[8].setEnemy("Phoenix", 1, (rand() % 10), 1, 500);

    enemies[9].setEntity(50, 3, 1, 2);
    enemies[9].setEnemy("EzBoss", 1, (rand() % 10), 1, 1000);

    enemies[10].setEntity(100, 3, 1, 3);
    enemies[10].setEnemy("Boss", 1, (rand() % 10), 1, 10000);

    return(enemies);
}


void    randomization (Enemy *enemies, Game *party){
    int i = 0;
    while (1){
        i = rand() % 101;
        if (i == 100)
            enemies[10].dead(party);
        else if (i > 95 && i <= 99)
            enemies[9].dead(party);
        else
            enemies[i % 9].dead(party);
        usleep(600000);

    }
}

int main() {
Game *party;
party->setScore(0);
    Weapon *weapons = spaceship_weapons();
    Enemy *enemies = generate_enemies();

//    enemies[0].dead(party);
//    enemies[1].dead(party);
//    enemies[2].dead(party);
//    enemies[3].dead(party);
//    enemies[4].dead(party);
//    enemies[5].dead(party);
//    enemies[6].dead(party);
//    enemies[7].dead(party);
//    enemies[8].dead(party);
//    enemies[9].dead(party);
//    enemies[9].dead(party);

    randomization(enemies, party);
//    delete[] weapons;
//    enemies[4].dead(test);
//    delete[] enemies;
    return 0;

}
