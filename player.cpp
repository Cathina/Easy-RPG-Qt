#include "player.h"
#include "rpgobj.h"

bool Player::fruit_flag1=1;
bool Player::fruit_flag2=1;
//direction =1,2,3,4 for 上下左右
void Player::move(int _x, int _y){
    //meet the stone and kill the player.
    if(this->_pos_y+_y==2 && this->_pos_x+_x==4){
        this->state = 0;
        return;
    }
    if(this->_pos_y+_y==5 && this->_pos_x+_x==6){
        this->state = 0;
        return;
    }
    if(this->_pos_y+_y==8 && this->_pos_x+_x==15){
        this->state = 0;
        return;
    }
    if(this->_pos_y+_y==6 && this->_pos_x+_x==8){
        this->state = 0;
        return;
    }
    //meet the fruit and eat the fruit.
    if(this->_pos_y+_y==7 && this->_pos_x+_x==6){
        this->fruit_flag1 = 0;
        this->_pos_x += _x;
        this->_pos_y += _y;
        return;
    }
    if(this->_pos_y+_y==8 && this->_pos_x+_x==3){
        this->fruit_flag2 = 0;
        this->_pos_x += _x;
        this->_pos_y += _y;
        return;
    }
    // the grass is not allowed to pass.
    if(this->_pos_x+_x !=0 && this->_pos_x+_x !=24 && this->_pos_y+_y !=16 && this->_pos_y+_y !=0){
        this->_pos_x += _x;
        this->_pos_y += _y;
        return;
    }

}
