#include "world.h"
#include "icon.h"

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


   //stone
    RPGObj obj1, obj2, obj3,obj4,obj5,obj6,obj7,obj8,obj9,obj10,obj11,obj12,obj13,obj14,obj15,obj16,obj17,obj18,obj19,obj20,obj21,obj22,
           obj23,obj24,obj25,obj26,obj27,obj28,obj29,obj30,obj31,obj32,obj33,obj34,obj35,obj36,obj37,obj38,obj39,obj40,obj41,obj42,obj43,
           obj44,obj45,obj46,obj47,obj48,obj49,obj50,obj51,obj52,obj53,obj54,obj55,obj56,obj57,obj58,obj59,obj60,obj61,obj62,obj63,obj64,
           obj65,obj66,obj67,obj68,obj69,obj70,obj71,obj72,obj73,obj74,obj75,obj76,obj77,obj78,obj79,obj80,obj81,obj82,obj83,obj84,obj85,
           obj86,obj87,obj88;

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
    obj4.setPosX(15);// 1 1
    obj4.setPosY(9);

    obj5.initObj("stone_big");
    obj5.setPosX(8);
    obj5.setPosY(6);

    obj6.initObj("fruit");
    obj6.setPosX(3);
    obj6.setPosY(9);

    obj7.initObj("grass");
    obj7.setPosX(0);
    obj7.setPosY(0);

    //obj8.initObj("grass");
    //obj8.setPosX(0);
    //obj8.setPosY(1);
    obj8.initObj("apple");
    obj8.setPosX(18);
    obj8.setPosY(9);
//
    obj9.initObj("grass");
    obj9.setPosX(0);
    obj9.setPosY(2);

    //obj10.initObj("grass");
    //obj10.setPosX(0);
    //obj10.setPosY(3);

    obj11.initObj("grass");
    obj11.setPosX(0);
    obj11.setPosY(4);

    //obj12.initObj("grass");
    //obj12.setPosX(0);
    //obj12.setPosY(5);

    obj13.initObj("grass");
    obj13.setPosX(0);
    obj13.setPosY(6);

    //obj14.initObj("grass");
    //obj14.setPosX(0);
    //obj14.setPosY(7);

    obj15.initObj("grass");
    obj15.setPosX(0);
    obj15.setPosY(8);

    //obj16.initObj("grass");
    //obj16.setPosX(0);
    //obj16.setPosY(9);

    obj17.initObj("grass");
    obj17.setPosX(0);
    obj17.setPosY(10);

    //obj18.initObj("grass");
    //obj18.setPosX(0);
    //obj18.setPosY(11);

    obj19.initObj("grass");
    obj19.setPosX(0);
    obj19.setPosY(12);

    //obj20.initObj("grass");
    //obj20.setPosX(0);
    //obj20.setPosY(13);

    obj21.initObj("grass");
    obj21.setPosX(0);
    obj21.setPosY(14);

    //obj22.initObj("grass");
    //obj22.setPosX(0);
    //obj22.setPosY(15);

    obj23.initObj("grass");
    obj23.setPosX(0);
    obj23.setPosY(16);

    //obj24.initObj("grass");
    //obj24.setPosX(0);
    //obj24.setPosY(17);

    obj25.initObj("grass");
    obj25.setPosX(1);
    obj25.setPosY(0);

    obj26.initObj("grass");
    obj26.setPosX(2);
    obj26.setPosY(0);

    obj27.initObj("grass");
    obj27.setPosX(3);
    obj27.setPosY(0);

    obj28.initObj("grass");
    obj28.setPosX(4);
    obj28.setPosY(0);

    obj29.initObj("grass");
    obj29.setPosX(5);
    obj29.setPosY(0);

    obj30.initObj("grass");
    obj30.setPosX(6);
    obj30.setPosY(0);

    obj31.initObj("grass");
    obj31.setPosX(7);
    obj31.setPosY(0);

    obj32.initObj("grass");
    obj32.setPosX(8);
    obj32.setPosY(0);

    obj33.initObj("grass");
    obj33.setPosX(9);
    obj33.setPosY(0);

    obj34.initObj("grass");
    obj34.setPosX(10);
    obj34.setPosY(0);

    obj35.initObj("grass");
    obj35.setPosX(11);
    obj35.setPosY(0);

    obj36.initObj("grass");
    obj36.setPosX(12);
    obj36.setPosY(0);

    obj37.initObj("grass");
    obj37.setPosX(13);
    obj37.setPosY(0);

    obj38.initObj("grass");
    obj38.setPosX(14);
    obj38.setPosY(0);

    obj39.initObj("grass");
    obj39.setPosX(15);
    obj39.setPosY(0);

    obj40.initObj("grass");
    obj40.setPosX(16);
    obj40.setPosY(0);

    obj41.initObj("grass");
    obj41.setPosX(17);
    obj41.setPosY(0);

    obj42.initObj("grass");
    obj42.setPosX(18);
    obj42.setPosY(0);

    obj43.initObj("grass");
    obj43.setPosX(19);
    obj43.setPosY(0);

    obj44.initObj("grass");
    obj44.setPosX(20);
    obj44.setPosY(0);

    obj45.initObj("grass");
    obj45.setPosX(21);
    obj45.setPosY(0);

    obj46.initObj("grass");
    obj46.setPosX(22);
    obj46.setPosY(0);

    obj47.initObj("grass");
    obj47.setPosX(23);
    obj47.setPosY(0);

    obj48.initObj("grass");
    obj48.setPosX(24);
    obj48.setPosY(0);

    //obj49.initObj("grass");
    //obj49.setPosX(24);
    //obj49.setPosY(1);

    obj50.initObj("grass");
    obj50.setPosX(24);
    obj50.setPosY(2);

    //obj51.initObj("grass");
    //obj51.setPosX(24);
    //obj51.setPosY(3);

    obj52.initObj("grass");
    obj52.setPosX(24);
    obj52.setPosY(4);

    //obj53.initObj("grass");
    //obj53.setPosX(24);
    //obj53.setPosY(5);

    obj54.initObj("grass");
    obj54.setPosX(24);
    obj54.setPosY(6);

    //obj55.initObj("grass");
    //obj55.setPosX(24);
    //obj55.setPosY(7);

    obj56.initObj("grass");
    obj56.setPosX(24);
    obj56.setPosY(8);

    //obj57.initObj("grass");
    //obj57.setPosX(24);
    //obj57.setPosY(9);

    obj58.initObj("grass");
    obj58.setPosX(24);
    obj58.setPosY(10);

    //obj59.initObj("grass");
    //obj59.setPosX(24);
    //obj59.setPosY(11);

    obj60.initObj("grass");
    obj60.setPosX(24);
    obj60.setPosY(12);

    //obj61.initObj("grass");
    //obj61.setPosX(24);
    //obj61.setPosY(13);

    obj62.initObj("grass");
    obj62.setPosX(24);
    obj62.setPosY(14);

    //obj63.initObj("grass");
    //obj63.setPosX(24);
    //obj63.setPosY(15);

    obj64.initObj("grass");
    obj64.setPosX(24);
    obj64.setPosY(16);

   //obj65.initObj("grass");
    //obj65.setPosX(24);
    //obj65.setPosY(16);

    obj66.initObj("grass");
    obj66.setPosX(23);
    obj66.setPosY(16);

    obj67.initObj("grass");
    obj67.setPosX(22);
    obj67.setPosY(16);

    obj68.initObj("grass");
    obj68.setPosX(21);
    obj68.setPosY(16);

    obj69.initObj("grass");
    obj69.setPosX(20);
    obj69.setPosY(16);

    obj70.initObj("grass");
    obj70.setPosX(19);
    obj70.setPosY(16);

    obj71.initObj("grass");
    obj71.setPosX(18);
    obj71.setPosY(16);

    obj72.initObj("grass");
    obj72.setPosX(17);
    obj72.setPosY(16);

    obj73.initObj("grass");
    obj73.setPosX(16);
    obj73.setPosY(16);

    obj74.initObj("grass");
    obj74.setPosX(15);
    obj74.setPosY(16);

    obj75.initObj("grass");
    obj75.setPosX(14);
    obj75.setPosY(16);

    obj76.initObj("grass");
    obj76.setPosX(13);
    obj76.setPosY(16);

    obj77.initObj("grass");
    obj77.setPosX(12);
    obj77.setPosY(16);

    obj78.initObj("grass");
    obj78.setPosX(11);
    obj78.setPosY(16);

    obj79.initObj("grass");
    obj79.setPosX(10);
    obj79.setPosY(16);

    obj80.initObj("grass");
    obj80.setPosX(9);
    obj80.setPosY(16);

    obj81.initObj("grass");
    obj81.setPosX(8);
    obj81.setPosY(16);

    obj82.initObj("grass");
    obj82.setPosX(7);
    obj82.setPosY(16);

    obj83.initObj("grass");
    obj83.setPosX(6);
    obj83.setPosY(16);

    obj84.initObj("grass");
    obj84.setPosX(5);
    obj84.setPosY(16);

    obj85.initObj("grass");
    obj85.setPosX(4);
    obj85.setPosY(16);

    obj86.initObj("grass");
    obj86.setPosX(3);
    obj86.setPosY(16);

    obj87.initObj("grass");
    obj87.setPosX(2);
    obj87.setPosY(16);

    obj88.initObj("grass");
    obj88.setPosX(1);
    obj88.setPosY(16);




    /*
    int dis=50;               //产生[0, dis)之间的随机数，注意不包括dis

    RPGObj obj1, obj2, obj3;
    obj1.initObj("stone");
    obj1.setPosX(Random(dis));
    obj1.setPosY(Random(dis));*/

    this->_objs.push_back(obj1);
    this->_objs.push_back(obj2);
    this->_objs.push_back(obj3);
    this->_objs.push_back(obj4);
    this->_objs.push_back(obj5);
    this->_objs.push_back(obj6);
    this->_objs.push_back(obj7);
    this->_objs.push_back(obj8);
    this->_objs.push_back(obj9);
    this->_objs.push_back(obj10);
    this->_objs.push_back(obj11);
    this->_objs.push_back(obj12);
    this->_objs.push_back(obj13);
    this->_objs.push_back(obj14);
    this->_objs.push_back(obj15);
    this->_objs.push_back(obj16);
    this->_objs.push_back(obj17);
    this->_objs.push_back(obj18);
    this->_objs.push_back(obj19);
    this->_objs.push_back(obj20);
    this->_objs.push_back(obj21);
    this->_objs.push_back(obj22);
    this->_objs.push_back(obj23);
    this->_objs.push_back(obj24);
    this->_objs.push_back(obj25);
    this->_objs.push_back(obj26);
    this->_objs.push_back(obj27);
    this->_objs.push_back(obj28);
    this->_objs.push_back(obj29);
    this->_objs.push_back(obj30);
    this->_objs.push_back(obj31);
    this->_objs.push_back(obj32);
    this->_objs.push_back(obj33);
    this->_objs.push_back(obj34);
    this->_objs.push_back(obj35);
    this->_objs.push_back(obj36);
    this->_objs.push_back(obj37);
    this->_objs.push_back(obj38);
    this->_objs.push_back(obj39);
    this->_objs.push_back(obj40);
    this->_objs.push_back(obj41);
    this->_objs.push_back(obj42);
    this->_objs.push_back(obj43);
    this->_objs.push_back(obj44);
    this->_objs.push_back(obj45);
    this->_objs.push_back(obj46);
    this->_objs.push_back(obj47);
    this->_objs.push_back(obj48);
    this->_objs.push_back(obj49);
    this->_objs.push_back(obj50);
    this->_objs.push_back(obj51);
    this->_objs.push_back(obj52);
    this->_objs.push_back(obj53);
    this->_objs.push_back(obj54);
    this->_objs.push_back(obj55);
    this->_objs.push_back(obj56);
    this->_objs.push_back(obj57);
    this->_objs.push_back(obj58);
    this->_objs.push_back(obj59);
    this->_objs.push_back(obj60);
    this->_objs.push_back(obj61);
    this->_objs.push_back(obj62);
    this->_objs.push_back(obj63);
    this->_objs.push_back(obj64);
    this->_objs.push_back(obj65);
    this->_objs.push_back(obj66);
    this->_objs.push_back(obj67);
    this->_objs.push_back(obj68);
    this->_objs.push_back(obj69);
    this->_objs.push_back(obj70);
    this->_objs.push_back(obj71);
    this->_objs.push_back(obj72);
    this->_objs.push_back(obj73);
    this->_objs.push_back(obj74);
    this->_objs.push_back(obj75);
    this->_objs.push_back(obj76);
    this->_objs.push_back(obj77);
    this->_objs.push_back(obj78);
    this->_objs.push_back(obj79);
    this->_objs.push_back(obj80);
    this->_objs.push_back(obj81);
    this->_objs.push_back(obj82);
    this->_objs.push_back(obj83);
    this->_objs.push_back(obj84);
    this->_objs.push_back(obj85);
    this->_objs.push_back(obj86);
    this->_objs.push_back(obj87);
    this->_objs.push_back(obj88);
}


void World::show(QPainter * painter){
    //show monster
    this->_monster.move();
    this->_monster.show(painter);
    if(this->_monster.getPosX()==this->_player.getPosX() && this->_monster.getPosY()==this->_player.getPosY()){
        this->_player.state = 0;
    }
    vector<RPGObj>::iterator it;
    if(this->_player.fruit_flag1 == 0)
    {
        it=this->_objs.begin();
        it+=2;
        (*it).state = 0;
    }
    if(this->_player.fruit_flag1 == 1)
    {
        it=this->_objs.begin();
        it+=2;
        (*it).state = 1;
    }
    if(this->_player.fruit_flag2 == 0)
    {
        it=this->_objs.begin();
        it+=5;
        (*it).state = 0;
    }
    if(this->_player.fruit_flag2 == 1)
    {
        it=this->_objs.begin();
        it+=5;
        (*it).state = 1;
    }
    //show object
    for(it=this->_objs.begin();it!=this->_objs.end();it++){
        if((*it).state == 1){(*it).show(painter);}
    }
    //show player
    if(_player.state == 1){this->_player.show(painter);}
    if(_player.state == 0 && flag==0)
    {
        this->_player.fruit_flag1=1;
        this->_player.fruit_flag2=1;
        flag=1;
        return;
    }
    if(_player.state == 0 && flag==1)//重载地图
    {
        flag=0;
        this->_player.setPosX(5);
        this->_player.setPosY(5);
        this->_player.state = 1;
        this->_player.show(painter);
    }
}

void World::handlePlayerMove(int _x, int _y){
    this->_player.move(_x, _y);
}

