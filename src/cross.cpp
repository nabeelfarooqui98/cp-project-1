#include "cross.h"

Cross::Cross()
{
    //ctor
}

Cross::Cross(int x,int y)
{
    tex.loadFromFile("X.png");
    sprite.setTexture(tex);
    sprite.setPosition(x,y);

}
Cross::~Cross()
{
    //dtor
}