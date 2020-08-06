#ifndef MAPS
#define MAPS

enum icons {
    W,      // wall
    P,      // path
    F,      // finish
    E       // enemy
};

int map_1[5][5] = {
    {W, W, W, W, W},
    {W, P, E, W, W},
    {W, P, W, W, W},
    {W, P, E, F, W},
    {W, W, W, W, W},
};

// int maps [1][5][5] = {map_1};

#endif