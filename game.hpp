#ifndef GAME
#define GAME

#include "player.hpp"

enum Moves{
    LEFT = 1,
    RIGHT,
    UP,
    DOWN,
    QUIT,
    START
};

void draw(Player *a, int map_num);
bool logic(Player *a, int map_num,int move, int nextMoves[4]);

#endif
