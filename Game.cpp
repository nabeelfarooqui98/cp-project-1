#include "Game.h"

Game::Game()
{
    test_tex.loadFromFile("Capture.PNG");
    test_sp.setTexture(test_tex);
}

Game::~Game()
{
    //dtor
}

void Game::Render()
{
    m_window.BeginDraw();
    m_window.Draw(test_sp);
    m_window.EndDraw();
}

void Game::HandleInput()
{

}

void Game::Update()
{
    m_window.Update();
}

Window* Game::GetWindow()
{
    Window *x;
    x = &m_window;
    return x;
}
