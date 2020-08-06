#include <iostream>
#include <stdio.h>

#include "game.hpp"
// #include "maps.hpp"

#define map_count 1  

using namespace std;

int main(){
    // set up
    char input;
    Player* user = new Player();
    int moves[4] = {0,0,0,0};

    // initialize game
    bool gameOver = logic(user, START, moves);

    while(!gameOver){
        // draw screen
        draw(user);
        cout << "\nAvailable moves:  ";
        if(moves[0] == 1){
            cout << "W (UP)  ";
        }
        if(moves[1] == 1){
            cout << "A (LEFT)  ";
        }
        if(moves[2] == 1){
            cout << "S (DOWN)  ";
        }
        if(moves[3] == 1){
            cout << "D (RIGHT)  ";
        }
        cout << endl;
        // input
        input = ' ';
        while(input != 'W' && input != 'A' && input != 'S' && input != 'D' && input != 'Q'){
            cout << "Enter your next move: ";
            cin >> input;
            if(input == 'W'){
                if(moves[0] == 0) input = ' ';
            }
            if(input == 'A'){
                if(moves[1] == 0) input = ' ';
            }
            if(input == 'S'){
                if(moves[2] == 0) input = ' ';
            }
            if(input == 'D'){
               if(moves[3] == 0) input = ' ';
            }
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

        //reset moves
        moves[0] = 0;
        moves[1] = 0;
        moves[2] = 0;
        moves[3] = 0;

        gameOver = logic(user, move, moves);
    }
    if(user->getLives()){

    } else {
        
    }
    delete user;
    return EXIT_SUCCESS;
}