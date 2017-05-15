#include "Game.h"
#include <iostream>

Game::Game()
{
    //    initialize array to zero
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            board[i][j]=0;


    //board
    tex_board.loadFromFile("CAPTURE.PNG");
    sp_board.setTexture(tex_board);

    //cross
    tex_cross_1.loadFromFile("X.png");
    //sp_cross_1.setTexture(tex_cross_1);

    for(int i=0;i<5;i++)
    {
        sp_cross[i].setTexture(tex_cross_1);
        sp_cross[i].setPosition(-200,0);
    }

    btex.loadFromFile("O.png"); //for bot
    for(int i=0; i<5; i++)
    {
        bsprite[i].setTexture(btex);
        bsprite[i].setPosition(-200,0);
    }

//    sp_cross_1.setOrigin();
//    sp_cross_1.setPosition(-200,0); //left of window

}

Game::~Game()
{
    //dtor
}

void Game::Render()
{
    m_window.BeginDraw();
    m_window.Draw(sp_board);

    for(int i=0;i<5;i++)
    {
        m_window.Draw(sp_cross[i]);
    }
    for(int i=0; i<5; i++)
    {
        m_window.Draw(bsprite[i]);
    }
    m_window.EndDraw();
       // std::cout << "POS of CROSS: " << sp_cross_1.getPosition().x << " " << sp_cross_1.getPosition().y << std::endl;
}

void Game::HandleInput()
{

}

void Game::Update()
{
     bool botTurn = false;
     botTurn = m_window.Update(board);
     /* pass reference to board array to take input from user
        it will return TRUE for botTurn if user places a piece (clicks mouse)*/

     //call func to check if user won
     bool didUserWin_var = didUserWin();
     if (didUserWin_var == true)
     {
         std::cout << "User won" << std::endl;
     }

    if(botTurn==true)
    {
        myBot.placePiece(board); //checks the board and BOT places piece accordingly

         bool didBotWin_var = didBotWin();
         if (didBotWin_var == true)
         {
             std::cout << "Bot won" << std::endl;
         }

    }

        displayBoard();

}

bool Game::didUserWin()
{
            if(board[0][0]==1&& board[1][1]==1 && board[2][2]==1)
            {
                return true;
            }
            else if(board[0][0]==1 && board[0][1]==1 && board[0][2]==1)
            {
                return true;
            }
            else if(board[0][0]==1&& board[1][0]==1 && board[2][0]==1)
            {
                return true;
            }
            else if(board[1][0]==1 && board[1][1]==1&& board[1][2]==1)
            {
                return true;
            }
            else if(board[2][0]==1 && board[2][1]==1 && board[2][2]==1)
            {
                return true;
            }
            else if(board[0][2]==1 && board[1][1]==1 && board[2][0]==1)
            {
                return true;
            }
            else if(board[0][1]==1 && board[1][1]==1 && board[2][1]==1)
            {
                return true;
            }
            else if(board[0][2]==1 && board[1][2]==1 && board[2][2]==1)
            {
                return true;
            }
            else
            {
                return false;
            }

}

bool Game::didBotWin()
{
            if(board[0][0]==2&& board[1][1]==2 && board[2][2]==2)
            {
                return true;
            }
            else if(board[0][0]==2 && board[0][1]==2 && board[0][2]==2)
            {
                return true;
            }
            else if(board[0][0]==2&& board[1][0]==2 && board[2][0]==2)
            {
                return true;
            }
            else if(board[1][0]==2 && board[1][1]==2&& board[1][2]==2)
            {
                return true;
            }
            else if(board[2][0]==2 && board[2][1]==2 && board[2][2]==2)
            {
                return true;
            }
            else if(board[0][2]==2 && board[1][1]==2 && board[2][0]==2)
            {
                return true;
            }
            else if(board[0][1]==2 && board[1][1]==2 && board[2][1]==2)
            {
                return true;
            }
            else if(board[0][2]==2 && board[1][2]==2 && board[2][2]==2)
            {
                return true;
            }
            else
            {
                return false;
            }
}

void Game::displayBoard()
{
    //these are only to read board array and set position of objects
    int i=0; //for CROSS ONLY
    int j=0; // for O, BOT

    /*

    it will first remove all pieces from the board (setposition away)
    then will place one at a time (will increment i after placing one piece)
    so that if any other IF condition is satisfied it will place next
    PIECE from the array (array mein limited sprites hain (5))

    */
    for(int i=0;i<5;i++)
    {
        sp_cross[i].setPosition(-200,0);
        bsprite[i].setPosition(-200,0);
    }



        if(board[0][0]==1)
        {
            sp_cross[i].setPosition(0,0);
            i++;
        }
        if(board[0][1]==1)
        {
            sp_cross[i].setPosition(200,0);
            i++;
        }
        if(board[0][2]==1)
        {
            sp_cross[i].setPosition(400,0);
            i++;
        }
        if(board[1][0]==1)
        {
            sp_cross[i].setPosition(0,200);
            i++;
        }
        if(board[1][1]==1)
        {
            sp_cross[i].setPosition(200,200);
            i++;
        }
        if(board[1][2]==1)
        {
            sp_cross[i].setPosition(400,200);
            i++;
        }
        if(board[2][0]==1)
        {
            sp_cross[i].setPosition(0,400);
            i++;
        }
        if(board[2][1]==1)
        {
            sp_cross[i].setPosition(200,400);
            i++;
        }
        if(board[2][2]==1)
        {
            sp_cross[i].setPosition(400,400);
            i++;
        }

        /*

        BOT FROM HERE

        */

         if(board[0][0]==2)
        {
            bsprite[j].setPosition(0,0);
            j++;
        }
        if(board[0][1]==2)
        {

            bsprite[j].setPosition(200,0);
            j++;
        }
        if(board[0][2]==2)
        {
            bsprite[j].setPosition(400,0);
            j++;
        }
        if(board[1][0]==2)
        {
            bsprite[j].setPosition(0,200);
            j++;
        }
        if(board[1][1]==2)
        {
            bsprite[j].setPosition(200,200);
            j++;
        }
        if(board[1][2]==2)
        {
            bsprite[j].setPosition(400,200);
            j++;
        }
        if(board[2][0]==2)
        {
            bsprite[j].setPosition(0,400);
            j++;
        }
        if(board[2][1]==2)
        {
            bsprite[j].setPosition(200,400);
            j++;
        }
        if(board[2][2]==2)
        {
            bsprite[j].setPosition(400,400);
            j++;
        }

}

Window* Game::GetWindow()
{
    //Window *x;
    //x = &m_window;
   // std::cout << "I  am being called\n";
    return &m_window;
}
