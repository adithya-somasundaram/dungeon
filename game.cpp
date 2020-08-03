#include "game.hpp"

using namespace std;

void draw(Player *a, int map_numb){
    system("CLEAR");
}

bool logic(Player *a, int map_numb, int move){

    // end game if player is out of lives
    if(a->getLives() > 0){
        return true;
    }
    return false;
}