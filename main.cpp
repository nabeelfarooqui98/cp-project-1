#include <SFML/Graphics.hpp>

#include "Game.h"
#include "Window.h"
#include <SFML/Audio.hpp>

int main(){
    Game game; // Creating our game object.
    int gameState;
    sf::Music music;
    if (!music.openFromFile("music.ogg"))
    std::cout<<"File Not Found"; // error

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
        music.play();
    }


    return 0;
}
