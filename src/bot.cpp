#include "bot.h"
#include <iostream>
Bot::Bot()
{

    //for NOW
    type = "EASY";

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

void Bot::placePiece(int board[3][3])
{
    //it will read the board
    //then set any one 0 to 2

    if(type=="EASY")
    {
        int a = rand()%3;
        int b = rand()%3;

        std::cout << a << " " << b << std::endl;

    }
    else
    {

    }
}
