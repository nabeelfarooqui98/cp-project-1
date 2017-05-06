#include "Window.h"
#include "Cross.h"
#include "bot.h"
#include <ctime>
int count=0;
Window::Window()
    {
    m_window.create(sf::VideoMode(600,600),"Tic Tac Toe",sf::Style::Default);
    m_window.setFramerateLimit(30);
    srand(time(NULL)); //for bot
    m_isDone = false;
    }

Window::~Window()
{
    m_window.close();
}

bool Window::Update(int board[3][3]){

   sf::Event event;

   while(m_window.pollEvent(event))
    {

      if(event.type == sf::Event::Closed)
        {
            m_isDone = true;
            m_window.close();
        }
        else if(event.type == sf::Event::MouseButtonReleased && event.mouseButton.button == sf::Mouse::Left)
        {
            int x = sf::Mouse::getPosition(m_window).x;
            int y = sf::Mouse::getPosition(m_window).y;

            bool botTurn = false;
            std::cout << x << "\t" << y << std::endl;


            // winning condition for bot

            // Winning Conditions for player
            if(board[0][0]==2&& board[1][1]==2 && board[2][2]==2)
            {

                m_isDone=true;
            }
            if(board[0][0]==2 && board[0][1]==2 && board[0][2]==2)
            {
                m_isDone=true;

            }
            if(board[0][0]==2&& board[1][0]==2 && board[2][0]==2)
            {
                m_isDone=true;

            }
            if(board[1][0]==2 && board[1][1]==2&& board[1][2]==2)
            {

                m_isDone=true;
            }
            if(board[2][0]==2 && board[2][1]==2 && board[2][2]==2)
            {
                m_isDone=true;

            }
            if(board[0][2]==2 && board[1][1]==2 && board[2][0]==2)
            {
                m_isDone=true;

            }
            if(board[0][1]==2 && board[1][1]==2 && board[2][1]==2)
            {
                m_isDone=true;

            }
            if(board[0][2]==2 && board[1][2]==2 && board[2][2]==2)
            {
                m_isDone=true;

            }

            // end of checking
            if(x>0 && x<200 && y>0 && y<200 && board[0][0]==0)
            {
                board[0][0]=1;
                count++;
                botTurn = true;
            }
            if(x>200 && x<400 && y>0 && y<200&&board[0][1]==0)
            {
                board[0][1]=1;
                count++;
                botTurn = true;
            }
            if(x>400 && x<600 && y>0 && y<200&&board[0][2]==0)
            {
                board[0][2]=1;
                count++;
                botTurn = true;
            }
            if(x>0 && x<200 && y>200 && y<400&&board[1][0]==0)
            {
                board[1][0]=1;
                count++;
                botTurn = true;
            }
            if(x>200 && x<400 && y>200 && y<400&&board[1][1]==0)
            {
                board[1][1]=1;
                count++;
                botTurn = true;
            }
            if(x>400 && x<600 && y>200 && y<400 && board[1][2]==0)
            {
                board[1][2]=1;
                count++;
                botTurn = true;
            }
            if(x>0 && x<200 && y>400 && y<600&&board[2][0]==0)
            {
                board[2][0]=1;
                count++;
                botTurn = true;
            }
            if(x>200 && x<400 && y>400 && y<600&&board[2][1]==0)
            {
                board[2][1]=1;
                count++;
                botTurn = true;
            }
            if(x>400 && x<600 && y>400 && y<600&&board[2][2]==0)
            {
                board[2][2]=1;
                count++;
                botTurn = true;
            }
            // Winning Conditions for player
            if(board[0][0]==1&& board[1][1]==1 && board[2][2]==1)
            {

                m_isDone=true;
            }
            if(board[0][0]==1 && board[0][1]==1 && board[0][2]==1)
            {
                m_isDone=true;

            }
            if(board[0][0]==1&& board[1][0]==1 && board[2][0]==1)
            {
                m_isDone=true;

            }
            if(board[1][0]==1 && board[1][1]==1&& board[1][2]==1)
            {

                m_isDone=true;
            }
            if(board[2][0]==1 && board[2][1]==1 && board[2][2]==1)
            {
                m_isDone=true;

            }
            if(board[0][2]==1 && board[1][1]==1 && board[2][0]==1)
            {
                m_isDone=true;

            }
            if(board[0][1]==1 && board[1][1]==1 && board[2][1]==1)
            {
                m_isDone=true;

            }
            if(board[0][2]==1 && board[1][2]==1 && board[2][2]==1)
            {
                m_isDone=true;

            }

            // same condition for bot

            return botTurn;
                // for bot
/*
            if(a>0 && a<200 && b>0 && b<200)
            {
                board[0][0]=2;

            }
            if(a>200 && a<400 && b>0 && b<200)
            {
                board[0][1]=2;

            }
            if(a>400 && a<600 && b>0 && b<200)
            {
                board[0][2]=2;

            }
            if(a>0 && a<200 && b>200 && b<400)
            {

                board[1][0]=2;
            }
            if(a>200 && a<400 && b>200 && b<400)
            {

                board[1][1]=2;
            }
*/

        }
   }
}

bool Window::IsDone()
{
    if(count>=5)
    {

        m_isDone=true;
    }

    return m_isDone;
}

void Window::BeginDraw()
{
    m_window.clear(sf::Color::Black);
}

void Window::EndDraw()
{
    m_window.display();
}

void Window::Draw(sf::Drawable &l_drawable){
    m_window.draw(l_drawable);
}
