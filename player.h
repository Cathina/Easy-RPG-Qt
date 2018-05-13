#ifndef PLAYER_H
#define PLAYER_H
#include"rpgobj.h"

class Player: public RPGObj
{
public:
    Player(){}
    ~Player(){}
    void move(int _x, int _y);
};

#endif // PLAYER_H
