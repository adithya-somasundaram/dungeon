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
    Player* c = new Player();
    while(!gameOver){
        draw(c, 1);
        // input
        cout << c->getX() << ", " << c->getY() << " Enter a number: ";
        cin >> input;
        if(input == 0){
            gameOver = true;
        } else if (input == 1){
            c->goUp();
        } else if (input == 2){
            c->goDown();
        } else if (input == 3){
            c->goLeft();
        } else if (input == 4){
            c->goRight();
        }
        // logic
    }
    delete c;
    return EXIT_SUCCESS;
}