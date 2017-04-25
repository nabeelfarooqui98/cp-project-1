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
void Bot::Delay(double s)
{
    int sec = int(s*1000);
    Sleep(sec);
}


void Bot::placePiece(int board[3][3])
{
    Delay(1);
    //it will read the board
    //then set any one 0 to 2
    bool placed = false;

    if(type=="EASY")
    {

        while(placed==false) //will keep generating random array positions until if finds one that is empty.
        {
            int a = rand()%3;
            int b = rand()%3;

            std::cout << a << " " << b << std::endl;

            if(board[a][b]==0)
            {
                std::cout << "Placing" << std::endl;

                board[a][b]=2;
                placed = true;
            }

        }

    }
    else //for hard difficulty
    {

    }
}
