#include "player.h"
#include "rpgobj.h"

bool Player::fruit_flag=1;
//direction =1,2,3,4 for 上下左右
void Player::move(int direction, int steps){
    switch (direction){
        case 1:
            if(this->_pos_y-steps==2 && this->_pos_x==4){
                this->state = 0;
                break;
            }
            if(this->_pos_y-steps==4 && this->_pos_x==6){
                this->state = 0;
                break;
            }
            if(this->_pos_y-steps==0 && this->_pos_x==1){
                this->state = 0;
                break;
            }
            if(this->_pos_y-steps==5 && this->_pos_x==8){
                this->state = 0;
                break;
            }
            //吃果果
            if(this->_pos_y-steps==8 && this->_pos_x==6){
                this->fruit_flag = 0;
            }
            this->_pos_y -= steps;
            break;

        case 2:
        if(this->_pos_y+steps==2 && this->_pos_x==4){
            this->state = 0;
            break;
        }
        if(this->_pos_y+steps==4 && this->_pos_x==6){
            this->state = 0;
            break;
        }
        if(this->_pos_y+steps==0 && this->_pos_x==1){
            this->state = 0;
            break;
        }
        if(this->_pos_y+steps==5 && this->_pos_x==8){
            this->state = 0;
            break;
        }
        if(this->_pos_y+steps==8 && this->_pos_x==6){
            this->fruit_flag = 0;
        }
        this->_pos_y += steps;
        break;

        case 3:
        if(this->_pos_y==2 && this->_pos_x-steps==4){
            this->state = 0;
            break;
        }
        if(this->_pos_y==4 && this->_pos_x-steps==6){
            this->state = 0;
            break;
        }
        if(this->_pos_y==0 && this->_pos_x-steps==1){
            this->state = 0;
            break;
        }
        if(this->_pos_y==5 && this->_pos_x-steps==8){
            this->state = 0;
            break;
        }
        if(this->_pos_y==8 && this->_pos_x-steps==6){
            this->fruit_flag = 0;
        }
        this->_pos_x-=steps;
        break;

        case 4:
        if(this->_pos_y==2 && this->_pos_x+steps==4){
            this->state = 0;
            break;
        }
        if(this->_pos_y==4 && this->_pos_x+steps==6){
            this->state = 0;
            break;
        }
        if(this->_pos_y==0 && this->_pos_x+steps==1){
            this->state = 0;
            break;
        }
        if(this->_pos_y==5 && this->_pos_x+steps==8){
            this->state = 0;
            break;
        }
        if(this->_pos_y==8 && this->_pos_x+steps==6){
            this->fruit_flag = 0;
        }
        this->_pos_x+=steps;
        break;
    }
}
