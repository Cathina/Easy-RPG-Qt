#include "world.h"
#include "icon.h"
//#include<stdio.h>
//#include<stdlib.h>
//#define Random(x) (rand() % x) //通过取余取得指定范围的随机数

bool World::flag=0;

void World::initWorld(string mapFile){
    //TODO 下面这部分逻辑应该是读入地图文件，生成地图上的对象
   //player 5 5
    this->_player.initObj("player");
    this->_player.setPosX(5);
    this->_player.setPosY(5);

    //stone 4 5
    RPGObj obj1, obj2, obj3,obj4,obj5,obj6;
    obj1.initObj("stone_small");
    obj1.setPosX(4);
    obj1.setPosY(3);

    obj2.initObj("stone_big");
    obj2.setPosX(6);
    obj2.setPosY(5);

    obj3.initObj("fruit");
    obj3.setPosX(6);
    obj3.setPosY(8);

    obj4.initObj("stone_small");
    obj4.setPosX(1);
    obj4.setPosY(1);

    obj5.initObj("stone_big");
    obj5.setPosX(8);
    obj5.setPosY(6);

    obj6.initObj("fruit");
    obj6.setPosX(3);
    obj6.setPosY(9);
    /*this->_player.initObj("player");
    this->_player.setPosX(5);
    this->_player.setPosY(5);

    int dis=50;               //产生[0, dis)之间的随机数，注意不包括dis

    RPGObj obj1, obj2, obj3;
    obj1.initObj("stone");
    obj1.setPosX(Random(dis));
    obj1.setPosY(Random(dis));

    obj2.initObj("stone");
    obj2.setPosX(Random(dis));
    obj2.setPosY(Random(dis));

    obj3.initObj("fruit");
    obj3.setPosX(Random(dis));
    obj3.setPosY(Random(dis));*/

    this->_objs.push_back(obj1);
    this->_objs.push_back(obj2);
    this->_objs.push_back(obj3);
    this->_objs.push_back(obj4);
    this->_objs.push_back(obj5);
    this->_objs.push_back(obj6);

}


void World::show(QPainter * painter){
    vector<RPGObj>::iterator it;
    if(this->_player.fruit_flag == 0)
    {
        it=this->_objs.begin();
        it+=2;
        (*it).state = 0;
    }
    for(it=this->_objs.begin();it!=this->_objs.end();it++){
        if((*it).state == 1){(*it).show(painter);}
      //  (*it).show(painter);
    }
    if(_player.state == 1){this->_player.show(painter);}
   // this->_player.show(painter);
    if(_player.state == 0 && flag==0){flag=1;return;}
    if(_player.state == 0 &&flag==1)
    {
        flag=0;
        this->_player.setPosX(5);
        this->_player.setPosY(5);
        this->_player.state = 1;
        this->_player.show(painter);
    }
}

void World::handlePlayerMove(int direction, int steps){
    this->_player.move(direction, steps);
}

