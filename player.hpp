#ifndef PLAYER
#define PLAYER

#include <array>
#include <iostream>

class Player{
private:
    int row;
    int column;
    int lives;
    std::array<int,3> inventory;

public:
    Player();
    Player(int x_pos, int y_pos, int lives_count); 

    int getRow(){return row;}
    int getColumn(){return column;}
    int getLives(){return lives;}

    void goLeft(){column--;}
    void goRight(){column++;}
    void goUp(){row--;}
    void goDown(){row++;}
    void loseLife(){lives--;}

    void setRow(int r){row = r;}
    void setColumn(int c){column = c;}
};

#endif