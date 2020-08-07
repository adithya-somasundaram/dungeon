#include "game.hpp"
#include "maps.hpp"

using namespace std;

void draw(Player *a){
    system("CLEAR");
    cout << "Position: (" << a->getRow() << "," << a->getColumn() << ")";
    cout << "\t Remaining Lives: ";
    for(int i = 0; i < a->getLives(); i++){
        cout << "*";
    }
}

bool logic(Player *a, int move, int nextMoves[4]){
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

    if(map_1[x-1][y] != W){
        nextMoves[0] = 1;
    }
    if(map_1[x+1][y] != W){
        nextMoves[2] = 1;
    }
    if(map_1[x][y-1] != W){
        nextMoves[1] = 1;
    }
    if(map_1[x][y+1] != W){
        nextMoves[3] = 1;
    }

    // end game if player is out of lives
    if(a->getLives() > 0){
        return false;
    }
    return true;
}