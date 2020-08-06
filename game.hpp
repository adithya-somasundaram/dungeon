#ifndef GAME
#define GAME

#include "player.hpp"

enum Moves{
    LEFT = 1,
    RIGHT,
    UP,
    DOWN,
    QUIT
};

void draw(Player *a);
bool logic(Player *a, int move);

#endif
