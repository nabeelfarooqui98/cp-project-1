#include "Window.h"
#include "Cross.h"
Window::Window()
    {
    m_window.create(sf::VideoMode(600,600),"Tic Tac Toe",sf::Style::Default);
    m_window.setFramerateLimit(30);

    m_isDone = false;
    }

Window::~Window()
{
    m_window.close();
}

void Window::Update(int board[3][3]){

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

            if(x>0 && x<200 && y>0 && y<200)
            {
                board[0][0]=1;

            }
            if(x>200 && x<400 && y>0 && y<200)
            {
                board[0][1]=1;

            }
            if(x>400 && x<600 && y>0 && y<200)
            {
                board[0][2]=1;

            }
            if(x>0 && x<200 && y>200 && y<400)
            {

                board[1][0]=1;
            }
            if(x>200 && x<400 && y>200 && y<400)
            {

                board[1][1]=1;
            }



        }
   }
}

bool Window::IsDone()
{
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
