#ifndef CROSS_H
#define CROSS_H

//Object of this class will be created when ever player wants to place a piece
//object of this class will be stationary. it will just stay on the board.

#include <SFML/Graphics.hpp>

class Cross
{
    public:
        Cross();
        Cross(int x,int y);
        ~Cross();
    protected:

    private:
        sf::Texture tex;
        sf::Sprite sprite;
};



#endif // CROSS_H
