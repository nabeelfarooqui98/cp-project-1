#ifndef GAME_H
#define GAME_H

#include "Window.h"
#include "bot.h"

class Game
{
    public:
        Game();
        ~Game();
        void HandleInput();
        void Update();
        void Render();
        Window* GetWindow();

    private:
        Window m_window; //composition
        int board[3][3];


        //all texture objects will be here

        //board
        sf::Sprite sp_board;
        sf::Texture tex_board;

        //cross
        sf::Sprite sp_cross[5];
        sf::Texture tex_cross_1;

        sf::Sprite bsprite[5]; //for bot
        sf::Texture btex; // for bot

        Bot myBot; // Composition but galat jaga par
};

#endif // GAME_H
