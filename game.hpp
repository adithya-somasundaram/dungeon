#ifndef GAME
#define GAME

#include "player.hpp"

enum moves{
    LEFT = 1,
    RIGHT,
    UP,
    DOWN,
    QUIT
};

void draw(Player *a, int map_numb);
bool logic(Player *a, int map_numb);

#endif
