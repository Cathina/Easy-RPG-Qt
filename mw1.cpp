#include "mw1.h"
#include "ui_mw1.h"
#include "icon.h"

#include <map>
#include <iostream>

using namespace std;

MW1::MW1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MW1)
{
    ui->setupUi(this);

    //init game world
    _game.initWorld("/Users/air/Desktop/RPG");//TODO 应该是输入有效的地图文件
}

MW1::~MW1()
{
    delete ui;
}

void MW1::paintEvent(QPaintEvent *e){
    QPainter *pa;
    pa = new QPainter();
    pa->begin(this);
    this->_game.show(pa);
    pa->end();
    delete pa;
}

void MW1::keyPressEvent(QKeyEvent *e)
{
    //direction =WSADfor 上下左右
    //操控player运动

    if(e->key() == Qt::Key_A)
    {
        this->_game.handlePlayerMove(-1,0);
    }
    else if(e->key() == Qt::Key_D)
    {
        this->_game.handlePlayerMove(1,0);
    }
    else if(e->key() == Qt::Key_W)
    {
        this->_game.handlePlayerMove(0,-1);
    }
    else if(e->key() == Qt::Key_S)
    {
         this->_game.handlePlayerMove(0,1);
    }
    this->repaint();
}
