#ifndef GAME_H
#define GAME_H

#include <Window.h>

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
        Window m_window;
        //all texture objects will be here
        sf::Sprite test_sp;
        sf::Texture test_tex;


};

#endif // GAME_H
