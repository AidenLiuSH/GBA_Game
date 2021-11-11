#ifndef MAIN_H
#define MAIN_H

#include "gba.h"

#include "gba.h"
#include "images/titlescreen.h"
#include "images/alien.h"
#include "images/rescue.h"
#include "images/winscreen.h"
#include "images/losescreen.h"


#define ENEMYCOUNT (5)
#define ENEMYSIZE (10)
#define COINCOUNT (5)
#define COINSIZE (5)
#define PLAYERSPEED (2)
#define PLAYERCOLOR (WHITE)
#define PLAYERSIZE (7)

struct player {
    int row;
    int col;
    int size;
    unsigned short color;
    int speed;
    int count;
};

struct enemy {
    int row;
    int col;
    int rowDirection;
    int colDirection;
};

struct coin {
    int row;
    int col;
    int rowDirection;
    int colDirection;
    int alive;
};

int collision(int aLeft, int aRight, int aTop, int aBottom, int bLeft, int bRight, int bTop, int bBottom);

// TODO: Create any necessary structs

/*
* For example, for a Snake game, one could be:
*
* struct snake {
*   int heading;
*   int length;
*   int row;
*   int col;
* };
*
* Example of a struct to hold state machine data:
*
* struct state {
*   int currentState;
*   int nextState;
* };
*
*/

#endif
