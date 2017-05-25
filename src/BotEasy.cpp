#include "BotEasy.h"
#include <iostream>
BotEasy::BotEasy()
{

}

void BotEasy::placePiece(int board[3][3])
{
    bool placed = false;

    while(placed==false )//nerating random array positions until if finds one that is empty.
    {

        //all places filled checker
        bool full = true; //assume that board is FULL
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(board[i][j]==0) //if any cell is empty, set 'full' to false
                {
                    full = false;
                }
            }
        }

        if(full == true)
        {
            std::cout << "board is full" << std::endl;
            break; //if board is full, bot can not place a piece
        }

        int a = rand()%3;
        int b = rand()%3;
        //isempty=false;
        std::cout << a << " " << b << std::endl;

        if(board[a][b]==0)
        {
            std::cout << "Placing" << std::endl;

            board[a][b]=2;
            placed = true;
        }
    }

}// function end bracket
