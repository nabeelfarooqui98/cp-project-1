#include <SFML/Graphics.hpp>

#include "Game.h"

int main(){
    Game game; // Creating our game object.

    while(game.GetWindow()->IsDone()==false)
    {
        // Game loop.
        game.HandleInput();
        game.Update();
        game.Render();
    }
}

//muaaz
