#include <iostream>
#include <stdio.h>

#include "game.hpp"

#define map_count 1  

using namespace std;

int main(){
    // set up
    char input;
    Player* user = new Player();
    int moves[4] = {0,0,0,0};

    // initialize game
    bool gameOver = logic(user, 0, START, moves);

    // Welcome messages
    system("CLEAR");
    cout << "--- WELCOME TO DUNGEON ---" << endl;
    cout << "Rules: Make your way through the dungeon to reach the finish point, enter 'Q' at any time to quit";
    cout << endl << "Enter any key to begin!";
    cin >> input;
    input = ' ';

    while(!gameOver){
        // draw screen
        draw(user, 0);

        // diplay available moves
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

        // store next move based on input
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
                cout << "Goodbye!" << endl;
                exit(0);
        }

        //reset moves array
        moves[0] = 0;
        moves[1] = 0;
        moves[2] = 0;
        moves[3] = 0;

        gameOver = logic(user, 0, move, moves);
    }

    // endgame
    if(user->getLives()){
        cout << "Congratulations! You win!!!";
    } else {
        cout << "Oh no! You lose :(";
    }
    cout << endl;

    // destroy user and end game
    delete user;
    return EXIT_SUCCESS;
}