#include "Game.h"
#include <iostream>
Game::Game()
{
    //    initialize array to zero
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            board[i][j]=0;


    //board
    tex_board.loadFromFile("board.PNG");
    sp_board.setTexture(tex_board);

    //cross
    tex_cross_1.loadFromFile("X.png");
    sp_cross_1.setTexture(tex_cross_1);
    sp_cross_1.setPosition(-200,0); //left of window
}

Game::~Game()
{
    //dtor
}

void Game::Render()
{
    m_window.BeginDraw();
    m_window.Draw(sp_board);
    m_window.Draw(sp_cross_1);
    m_window.EndDraw();
        std::cout << "POS of CROSS: " << sp_cross_1.getPosition().x << " " << sp_cross_1.getPosition().y << std::endl;
}

void Game::HandleInput()
{

}

void Game::Update()
{
    m_window.Update(board);//pass reference to board array

    if(board[0][0]==1)
    {
        std::cout << "INSIDE if COND\n";
        sp_cross_1.setPosition(0,0);
    }
}


Window* Game::GetWindow()
{
    Window *x;
    x = &m_window;
    return x;
}
