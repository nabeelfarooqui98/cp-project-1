#include "Window.h"

Window::Window()
    {
        Create(); //default values are already decided. no need to pass values. when Window object is created, it
                    //will call Create();
        m_isDone = false;
    }

Window::~Window()
{
    m_window.close();
}

void Window::Create()
{
    m_window.create(sf::VideoMode(600,600),"Tic Tac Toe",sf::Style::Default);
    m_window.setFramerateLimit(30);
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
