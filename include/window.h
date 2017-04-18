#ifndef WINDOW_H
#define WINDOW_H

#include <iostream>
#include <SFML/Graphics.hpp>

class Window{
public:
    Window();
    ~Window();
    void BeginDraw(); // Clear the window.
    void EndDraw(); // Display the changes.
    void Update(int board[3][3]);
    bool IsDone();
    void Draw(sf::Drawable& l_drawable);

private:
    void Destroy();

    sf::RenderWindow m_window;
    bool m_isDone;
};

#endif // WINDOW_H
