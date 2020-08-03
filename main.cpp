#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    bool gameOver = false;
    int input;

    while(!gameOver){
        // render
        system("CLEAR");
        cout << "Enter a number: ";
        cin >> input;
        if(input == 0){
            gameOver = true;
        }
    }
    return EXIT_SUCCESS;
}