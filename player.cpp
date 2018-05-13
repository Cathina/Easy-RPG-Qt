#include "player.h"
#include "rpgobj.h"


void Player::move(int _x, int _y){
    if(this->_pos_x+_x !=0 && this->_pos_x+_x !=24 && this->_pos_y+_y !=16 && this->_pos_y+_y !=0){
        this->_pos_x += _x;
        this->_pos_y += _y;
        return;
    }
}
