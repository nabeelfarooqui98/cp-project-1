#include "bot.h"

Bot::Bot()
{
    //ctor
}

Bot::Bot(int a,int b)
{
    btex.loadFromFile("O.png");
    bsprite.setTexture(btex);
    bsprite.setPosition(a,b);
}

Bot::~Bot()
{

}
