#ifndef PLAYER_H
#define PLAYER_H
#include"rpgobj.h"

class Player: public RPGObj
{
public:
    Player(){}
    ~Player(){}
    void move(int _x, int _y);
        //direction =1,2,3,4 for 上下左右
public:
    static bool fruit_flag1;
    static bool fruit_flag2;
};

#endif // PLAYER_H
