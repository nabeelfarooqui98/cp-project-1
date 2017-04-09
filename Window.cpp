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

void Window::Update(){

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
            Cross cross(sf::Mouse::getPosition(m_window).x,sf::Mouse::getPosition(m_window).y);

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
