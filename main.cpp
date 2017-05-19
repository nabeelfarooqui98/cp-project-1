#include <SFML/Graphics.hpp>

#include "Game.h"
#include "Window.h"

int main(){
    Game game; // Creating our game object.
    int gameState;

    while(game.GetWindow()->IsDone()==false)
    {
        // Game loop.
        game.HandleInput();
        gameState = game.Update(); //will return -1 for draw, 1 for user win, 2 for bot win. 0 for continue
        game.Render();

        if(gameState != 0)
        {
            game.displayMessage(gameState); //send which message to display. this func will also set isDone to true
        }
    }


    return 0;
}
