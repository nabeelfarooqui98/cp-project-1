#ifndef BOT_H
#define BOT_H
#include <SFML/Graphics.hpp> //you must include this otherwise u can't create any sfml private variable

class Bot
{
    public:
        Bot();
        ~Bot(); //destructor
        Bot(int a,int b); // parametrized constructor
        void placePiece(int board[3][3]);

    protected:

    private:
        sf::Texture btex;
        sf::Sprite bsprite;

        std::string type;

};

#endif // BOT_H
