#ifndef MAPS
#define MAPS

enum icons {
    W,      // wall
    P,      // path
    F,      // finish
    E       // enemy
};

int map_1[1][10][10] = {
    {
        {W, W, W, W, W, W, W, W, W, W},
        {W, P, E, W, W, W, E, P, P, W},
        {W, P, W, W, W, P, W, W, P, W},
        {W, P, E, W, W, P, P, P, P, W},
        {W, P, P, P, P, P, W, W, E, W},
        {W, P, W, E, P, W, P, F, W, W},
        {W, P, W, W, P, W, P, W, E, W},
        {W, P, E, W, P, P, P, W, P, W},
        {W, P, P, P, P, W, P, E, P, W},
        {W, W, W, W, W, W, W, W, W, W}
    }
};

#endif