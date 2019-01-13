#include "weapon.class.hpp"
#include <ctime>
#include <unistd.h>
#include <ncurses.h>
#include <time.h>
#include <stdio.h>
#include <thread>
#include "entity.class.hpp"
#include "game.class.hpp"
#include "spaceship.class.hpp"
#include "enemy.class.hpp"
#include "obstacle.class.hpp"
#include "Map.class.hpp"

//Weapon *spaceship_weapons(){
//    Weapon *weapons = new Weapon [6];
//    weapons[0].SetWeapon("Basic", 1, 1, 1, 1, 1);
//
//    weapons[1].SetWeapon("RapidFire", 5, 1, 1, 2, 1);
//
//    weapons[2].SetWeapon("BlueFire", 1, 5, 1, 3, 1);
//
//    weapons[3].SetWeapon("MultiCanon", 1, 1, 3, 4, 1);
//
//    weapons[4].SetWeapon("Vortex", 3, 3, 3, 5, 2);
//
//    weapons[5].SetWeapon("Conqueror", 10, 10, 3, 6, 3);
//
//    return(weapons);
//}
//
//Enemy *generate_enemies(){
//    srand(time(NULL));
//    Enemy *enemies = new Enemy[11];
//    enemies[0].setEntity(1, 3, 0, 1);
//    enemies[0].setEnemy("Ship", 0, (rand() % 10), 0, 10);
//
//    enemies[1].setEntity(2, 3, 0, 1);
//    enemies[1].setEnemy("Ship++", 0, (rand() % 10), 0, 20);
//
//    enemies[2].setEntity(3, 3, 1, 1);
//    enemies[2].setEnemy("Basic++", 0, (rand() % 10), 0, 30);
//
//    enemies[3].setEntity(4, 3, 0, 2);
//    enemies[3].setEnemy("Dark", 0, (rand() % 10), 0, 40);
//
//    enemies[4].setEntity(5, 1, 0, 1);
//    enemies[4].setEnemy("Tempest", 0, (rand() % 10), 0, 50);
//
//    enemies[5].setEntity(10, 3, 1, 1);
//    enemies[5].setEnemy("BloodMesYeuks", 0, (rand() % 10), 0, 100);
//
//    enemies[6].setEntity(20, 3, 1, 2);
//    enemies[6].setEnemy("Queen Of Pain", 1, (rand() % 10), 0, 500);
//
//    enemies[7].setEntity(30, 3, 1, 2);
//    enemies[7].setEnemy("DarkTempest", 1, (rand() % 10), 1, 500);
//
//    enemies[8].setEntity(40, 3, 1, 1);
//    enemies[8].setEnemy("Phoenix", 1, (rand() % 10), 1, 500);
//
//    enemies[9].setEntity(50, 3, 1, 2);
//    enemies[9].setEnemy("EzBoss", 1, (rand() % 10), 1, 1000);
//
//    enemies[10].setEntity(100, 3, 1, 3);
//    enemies[10].setEnemy("Boss", 1, (rand() % 10), 1, 10000);
//
//    return(enemies);
//}
//
//
//void    randomization_enemies (Enemy *enemies, Game *party){
//    int i = 0;
//    while (1){
//        i = rand() % 101;
//
//        if (i == 100)
//        {
//            enemies[10].appear();
//            enemies[10].dead(party);
//        }
//        else if (i > 95 && i <= 99)
//        {
//            enemies[9].appear();
//            enemies[9].dead(party);
//        }
//        else
//        {
//            i = i % 9;
//            enemies[i].appear();
//            enemies[i].dead(party);
//        }
//        usleep(600000);
//    }
//}
//
//int main() {
//Game *party;
//party->setScore(0);
//    Weapon *weapons = spaceship_weapons();
//    Enemy *enemies = generate_enemies();
//
//    std::cout << (rand() % 2);
//    while (1){
//
//    randomization_enemies(enemies, party);
//    }

//    delete[] weapons;
//    enemies[4].dead(test);
//    delete[] enemies;
//    return 0;
//}


void			print_gameInfo(Game &gameInfo)
{
    move(0, 0);
    clrtoeol();
    printw("Score : %u ; Lives : %d ; Time : %u ; Difficulty : %d",
           gameInfo.getScore(), gameInfo.getLives(), gameInfo.getTime(), gameInfo.getDifficult());
}

void			print_border(int init_y)
{
    int			x;

    x = 0;
    while (x < MAP_X)
    {
        move(init_y, x);
        addch('*');
        x++;
    }
    x = 0;
    while (x < MAP_X)
    {
        move(MAP_Y - 1, x);
        addch('*');
        x++;
    }
}

int				check_game_size(void)
{
    if (LINES < MAP_X || COLS < MAP_Y)
        return (0);
    return (1);
}

void			start_game(Map *map)
{
    Game		gameInfo;
    Spaceship	*player = new Spaceship("PLayer1");
    Obstacle	*obs = new Obstacle[50];
    bool		end_game;
    int			key;
    int			init_y;
    int			num_obs = 0;

    end_game = 0;
    init_y = 2;
    map->setPosition(obs[num_obs].getY(), obs[num_obs].getX(), OBS);
    while (end_game == 0)
    {
        // REVOIR GAME LIMITE
        if (check_game_size() == 1)
        {
            delete player;
            delete [] obs;
            return ;
        }
        print_gameInfo(gameInfo);
        print_border(init_y);
        player->Print(map);
        if (obs[num_obs].getX() < 0)
        {
            num_obs++;
            if (num_obs > 49)
            {
                delete player;
                delete [] obs;
                return ;
            }
            obs[num_obs].setTime(clock());
            map->setPosition(obs[num_obs].getY(), obs[num_obs].getX(), OBS);
        }
        if (obs[num_obs].Move(map) == 1)
            end_game = 1;
        key = getch();
        if (player->Move(key, init_y, map) == 1)
            end_game = 1;
        if (key == 10)
            end_game = 1;
//		usleep(10000);
        refresh();
    }
    delete player;
    delete [] obs;
}

int				main(void)
{
    Map			*map = new Map();

    initscr();
    cbreak();
    noecho();
    curs_set(0);
    nodelay(stdscr, TRUE);
    start_game(map);
    endwin();
    delete map;
}
