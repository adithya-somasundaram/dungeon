#include "player.hpp"

Player::Player(){
    row = 1;
    column = 1;
    lives = 3;
}

Player::Player(int r_pos, int c_pos, int lives_count){
    row = r_pos;
    column = c_pos;
    lives = lives_count;
}