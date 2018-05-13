#ifndef MONSTER_H
#define MONSTER_H
#include"rpgobj.h"
#include"player.h"

class Monster: public Player
{
public:
    Monster(){}
    ~Monster(){}
    void move();
};

#endif // MONSTER_H
