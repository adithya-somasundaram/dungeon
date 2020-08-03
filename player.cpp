#include "player.hpp"

Player::Player(){
    x = 1;
    y = 1;
    lives = 3;
}

Player::Player(int x_pos, int y_pos, int lives_count){
    x = x_pos;
    y = y_pos;
    lives = lives_count;
}