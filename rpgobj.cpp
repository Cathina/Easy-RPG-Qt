#include "rpgobj.h"
#include <iostream>

void RPGObj::initObj(string type)
{
    //TODO 所支持的对象类型应定义为枚举
    if (type.compare("player")==0){
        this->_coverable = false;
        this->_eatable = false;
        this->state = true;
    }
    else if (type.compare("stone_small")==0){
        this->_coverable = false;
        this->_eatable = false;
        this->state = true;
    }
    else if (type.compare("stone_big")==0){
        this->_coverable = false;
        this->_eatable = false;
        this->state = true;
    }
    else if (type.compare("fruit")==0){
        this->_coverable = false;
        this->_eatable = true;
        this->state = true;
    }
    else if (type.compare("grass")==0){
        this->_coverable = false;
        this->_eatable = false;
        this->state = true;
    }
    else if (type.compare("monster")==0){
        this->_coverable = false;
        this->_eatable = false;
        this->state = true;
    }
    else if (type.compare("cactus")==0){
        this->_coverable = false;
        this->_eatable = false;
        this->state = true;
    }
    else if (type.compare("apple")==0){
        this->_coverable = false;
        this->_eatable = false;
        this->state = true;
    }
    else{
        //TODO 应由专门的错误日志文件记录
        cout<<"invalid ICON type."<<endl;
        return;
    }

    this->_icon = ICON::findICON(type);
    QImage all;
    all.load("/Users/air/Desktop/RPG/TileB.png");
    this->_pic = all.copy(QRect(_icon.getSrcX()*ICON::GRID_SIZE, _icon.getSrcY()*ICON::GRID_SIZE, _icon.getWidth()*ICON::GRID_SIZE, _icon.getHeight()*ICON::GRID_SIZE));
}

void RPGObj::show(QPainter * pa){
    int gSize = ICON::GRID_SIZE;
    if(state == 1){
        pa->drawImage(this->_pos_x*gSize,this->_pos_y*gSize,this->_pic);
    }
    //pa->drawImage(this->_pos_x*gSize,this->_pos_y*gSize,this->_pic);
}



