#include "icon.h"
#include<iostream>
int ICON::GRID_SIZE = 32;


pair<string,ICON> pairArray[] =//cyh: pair 构造映映射关系 前者是键 后者是附加数据
{
    make_pair("player",ICON("player",1,13, 1, 2)),
    make_pair("stone_small",ICON("stone_small",5,9, 1, 1)),
    make_pair("stone_big",ICON("stone_big",4,9,1,1)),
    make_pair("fruit",ICON("fruit",7,14, 1, 1)),
    make_pair("vegetable",ICON("vegetable",10,13, 1, 1)),
    make_pair("flower",ICON("flower",3,6,1,1)),
    make_pair("grass",ICON("grass",4,6,1,1)),
    make_pair("apple",ICON("apple",15,3,1,1)),
    make_pair("cactus",ICON("cactus",7,13,1,1)),
    make_pair("tree",ICON("grass",5,6,1,2)),
    make_pair("monster",ICON("monster",8,12,1,2))
    //make_pair("")  to be added...
};

map<string,ICON> ICON::GAME_ICON_SET(pairArray,pairArray+sizeof(pairArray)/sizeof(pairArray[0]));


ICON::ICON(string name, int x, int y, int w, int h){
    this->typeName = name;
    this->srcX = x;
    this->srcY = y;
    this->width = w;
    this->height = h;
}

ICON ICON::findICON(string type){
    map<string,ICON>::iterator kv;
    kv = ICON::GAME_ICON_SET.find(type);
    if (kv==ICON::GAME_ICON_SET.end()){

       cout<<"Error: cannot find ICON"<<endl;
       return ICON();
    }
    else{
        return kv->second;//cyh：输出kv迭代器所指的键的附加数据
    }
}
