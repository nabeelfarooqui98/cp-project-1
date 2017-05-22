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
    bool check;


     sf::Sprite sp_mainmenu;
    sf::Texture tex_mainmenu;
    tex_mainmenu.loadFromFile("mainmenu.png");
    sp_mainmenu.setTexture(tex_mainmenu);
    sp_mainmenu.setPosition(-100,0);
    sf::RenderWindow window(sf::VideoMode(600, 600), "Tic Tac Toe");
    bool startgame=false,endgame=false;
    while (window.isOpen()&&!startgame && !endgame)
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
        if(event.type == sf::Event::Closed)
        {
           endgame = true;
          window.close();
        }
            if (event.type == sf::Event::MouseButtonReleased && event.mouseButton.button == sf::Mouse::Left)
                {
                    int x = sf::Mouse::getPosition(window).x;
                    int y = sf::Mouse::getPosition(window).y;
                    if((x>0 && y>120) && (x<370 && y<280) )
                    {

                     startgame=true;
                        window.close();
                    }
                    if((x>0 && y>300) && (x<370 && y<430) )
                    {
                     //   amir++;
                        endgame=true;
                        window.close();
                    }

                   // std::cout << x << " -- " << y << std::endl;

                }
                //window.close();
        }

        window.clear();
        window.draw(sp_mainmenu);
        window.display();
    }

    //comes afterward
    if(startgame&&!endgame)
    {



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

        }
    return 0;
}
