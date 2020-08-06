#include "game.hpp"
#include "maps.hpp"

using namespace std;

void draw(Player *a){
    system("CLEAR");
    cout << "(" << a->getRow() << "," << a->getColumn() << ")\t" << a->getLives();
}

bool logic(Player *a, int move){
    int orig_row = a->getRow();
    int orig_column = a->getColumn();

    switch(move){
        case LEFT:
            a->goLeft();
            break;
        case RIGHT:
            a->goRight();
            break;
        case UP:
            a->goUp();
            break;
        case DOWN:
            a->goDown();
            break;
        default:
            break;
    }

    int x = a->getRow();
    int y = a->getColumn();

    int new_space = map_1[x][y];

    switch(new_space){
        case W:
            a->setRow(orig_row);
            a->setColumn(orig_column);
            break;
        case E:
            a->loseLife();
            break;
        case F:
            return true;
        default:
            break;
    }


    // end game if player is out of lives
    if(a->getLives() > 0){
        return false;
    }
    return true;
}