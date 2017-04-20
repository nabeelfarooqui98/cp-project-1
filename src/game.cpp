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
    m_window.Update(board);//pass reference to board array
    // this is for 1 cross
    // sp_cross_1 k liyay positions k liyay karo then again u have to make a texture sp_cross_2

    int i=0;

    if(board[0][0]==1)
    {
        std::cout << "INSIDE if COND\n";
        sp_cross[i].setPosition(0,0);
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
        sp_cross[i].setPosition(0,400);
    i++;
    }
    if(board[1][2]==1)
    {
        sp_cross[i].setPosition(0,600);
    i++;
    }

    //for bot
    int y=0;
     if(board[0][0]==2)
    {
        std::cout << "Entrance of Bot\n";
        bsprite[y].setPosition(0,0);
    }
    if(board[0][1]==2)
    {

        bsprite[y].setPosition(200,0);
        y++;
    }
    if(board[0][2]==2)
    {
        bsprite[y].setPosition(400,0);
    y++;
    }
    if(board[1][0]==2)
    {
        bsprite[y].setPosition(0,200);
    y++;
    }
    if(board[1][1]==2)
    {
        bsprite[y].setPosition(0,400);
    y++;
    }
    if(board[1][2]==2)
    {
        bsprite[y].setPosition(0,600);
    y++;
    }


    // end of bot



}


Window* Game::GetWindow()
{
    //Window *x;
    //x = &m_window;
    return &m_window;
}
