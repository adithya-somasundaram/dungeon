#include <iostream>
#include <stdio.h>

#include "game.hpp"
#include "maps.hpp"

#define map_count 1  

using namespace std;

int main(){
    bool gameOver = false;
    int input;

    // setup
    Player* user = new Player();
    while(!gameOver){
        draw(user, 1);
        // input
        cout << user->getX() << ", " << user->getY() << " Enter a number: ";
        cin >> input;
        if(input == 0){
            gameOver = true;
        } else if (input == 1){
            user->goUp();
        } else if (input == 2){
            user->goDown();
        } else if (input == 3){
            user->goLeft();
        } else if (input == 4){
            user->goRight();
        }
        // logic
    }
    if(user->getLives()){

    } else {
        
    }
    delete user;
    return EXIT_SUCCESS;
}