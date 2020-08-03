#include <iostream>
#include <stdio.h>

#include "game.hpp"

#define map_count 1  

using namespace std;

int main(){
    bool gameOver = false;
    int input;

    // setup
    while(!gameOver){
        // render
        system("CLEAR");
        // input
        cout << "Enter a number: ";
        cin >> input;
        if(input == 0){
            gameOver = true;
        }
        // logic
    }
    return EXIT_SUCCESS;
}