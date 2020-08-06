#include <iostream>
#include <stdio.h>

#include "game.hpp"
// #include "maps.hpp"

#define map_count 1  

using namespace std;

int main(){
    // set up
    bool gameOver = false;
    char input;
    Player* user = new Player();
    int moves[4] = {0,0,0,0};

    while(!gameOver){
        draw(user);

        input = ' ';
        // input
        while(input != 'W' && input != 'A' && input != 'S' && input != 'D' && input != 'Q'){
            cout << "\nEnter your next move: ";
            cin >> input;
        }

        int move;
        switch(input){
            case 'W':
                move = UP;
                break;
            case 'A':
                move = LEFT;
                break;
            case 'S':
                move = DOWN;
                break;
            case 'D':
                move = RIGHT;
                break;
            default:
                exit(0);
        }
        gameOver = logic(user, move);
    }
    if(user->getLives()){

    } else {
        
    }
    delete user;
    return EXIT_SUCCESS;
}