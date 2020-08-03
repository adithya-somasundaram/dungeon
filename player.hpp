#ifndef PLAYER
#define PLAYER

#include <array>
#include <iostream>

class Player{
private:
    int x;
    int y;
    int lives;
    std::array<int,3> inventory;
public:
    Player(int x_pos, int y_pos, int lives_count); 

    int getX(){return x;}
    int getY(){return y;}
    int getLives(){return lives;}

    void goLeft(){x--;}
    void goRight(){x++;}
    void goUp(){y--;}
    void goDown(){y++;}
    

};

#endif