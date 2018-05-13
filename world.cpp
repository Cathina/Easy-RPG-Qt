#include "world.h"
#include "icon.h"
#include<stdio.h>
#include<stdlib.h>
#include <math.h>
#define Random(x) (rand() % x) //通过取余取得指定范围的随机数

bool World::flag=0;

void World::initWorld(string mapFile){
    //TODO 下面这部分逻辑应该是读入地图文件，生成地图上的对象
   //player 5 5
    this->_player.initObj("player");
    this->_player.setPosX(5);
    this->_player.setPosY(5);

   //monster 10 8
    this->_monster.initObj(("monster"));
    this->_monster.setPosX(10);
    this->_monster.setPosY(8);

    RPGObj tmp;
    //something not eatable
    for(int i=0;i<200;i++){
        int dis=7,disx=23,disy=15;
        int tmpf=Random(dis),tmpx=Random(disx),tmpy=Random(disy);
        tmpf=round(tmpf);
        if(tmpf == 7) tmpf--;
        if(round(tmpx)==0) tmpx++;
        if(round(tmpy)==1) tmpy++;
        if(tmpf == 6){tmp.initObj("vegetable");}
        else if(tmpf == 5){tmp.initObj("apple");}
        else if(tmpf == 4){tmp.initObj("flower");}
        else if(tmpf == 3){tmp.initObj("grass");}
        else if(tmpf == 2){tmp.initObj("cactus");}
        else if( tmpf ==1) {tmp.initObj("stone_small");}
        else if(tmpf == 0) {tmp.initObj("stone_big");}
        tmp.setPosX(round(tmpx));
        tmp.setPosY(round(tmpy));
        this->_objs.push_back(tmp);
    }

    for(int i=0;i<17;i+=2){
        tmp.initObj("tree");
        tmp.setPosX(0);
        tmp.setPosY(i);
        this->_objs.push_back(tmp);
    }
    for(int i=1;i<25;i++){
        tmp.initObj("tree");
        tmp.setPosX(i);
        tmp.setPosY(0);
        this->_objs.push_back(tmp);
    }
    for(int i=2;i<17;i+=2){
        tmp.initObj("tree");
        tmp.setPosX(24);
        tmp.setPosY(i);
        this->_objs.push_back(tmp);
    }
    for(int i=1;i<25;i++){
        tmp.initObj("tree");
        tmp.setPosX(i);
        tmp.setPosY(16);
        this->_objs.push_back(tmp);
    }
}


void World::show(QPainter * painter){
    //show monster
    this->_monster.move();
    this->_monster.show(painter);
    if(this->_monster.getPosX()==this->_player.getPosX() && this->_monster.getPosY()==this->_player.getPosY()){
        this->_player.state = 0;
    }
    vector<RPGObj>::iterator it;

    for(it=this->_objs.begin();it!=this->_objs.end();it++)
    {
        if(this->_player.getPosX()==(*it).getPosX() && (this->_player.getPosY()+1)==(*it).getPosY())//如果遇上了物体
        {
            if( (*it).canEat() == true)//若该物体可吃 则该物体消失。
            {
                (*it).state = 0;
            }
            if((*it).canCover()== 0){//石头不可通过 撞上了即死
                this->_player.state = 0;
            }
        }
    }

    //show object
    for(it=this->_objs.begin();it!=this->_objs.end();it++){
        if((*it).state == 1){(*it).show(painter);}
    }
    //show player
    if(_player.state == 1){this->_player.show(painter);}

    if(_player.state == 0 && flag==0)
    {
        flag=1;
        for(it=this->_objs.begin();it!=this->_objs.end();it++){
            (*it).state = 1;
        }
        return;
    }
    if(_player.state == 0 && flag==1)//重载地图
    {
        flag=0;
        this->_player.state = 1;
        this->_player.setPosX(5);
        this->_player.setPosY(5);
        this->_monster.setPosX(10);
        this->_monster.setPosY(10);
        this->_player.show(painter);
    }
}

void World::handlePlayerMove(int _x, int _y){
    this->_player.move(_x, _y);
}

