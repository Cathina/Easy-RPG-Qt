#include "monster.h"
#include "rpgobj.h"
#include<stdio.h>
#include<stdlib.h>
#include <math.h>
#define Random(x) (rand() % x) //通过取余取得指定范围的随机数

void Monster::move(){
    int dis=5,_x=0,_y=0;
    int tmp=Random(dis);
    if(tmp==0) tmp=1;
    tmp=round(tmp);
    switch(tmp){
    case 1:
        _x=0;
        _y=1;
        break;
    case 2:
        _x=0;
        _y=-1;
        break;
    case 3:
        _x=1;
        _y=0;
        break;
    case 4:
        _x=-1;
        _y=0;
        break;
    }
    // the tree is not allowed to pass.
    if(this->_pos_x+_x !=0 && this->_pos_x+_x !=24 && this->_pos_y+_y !=16 && this->_pos_y+_y !=-1){
        this->_pos_x += _x;
        this->_pos_y += _y;
        return;
    }
}

/*
int dis=50;               //产生[0, dis)之间的随机数，注意不包括dis

RPGObj obj1, obj2, obj3;
obj1.initObj("stone");
obj1.setPosX(Random(dis));
obj1.setPosY(Random(dis));*/
