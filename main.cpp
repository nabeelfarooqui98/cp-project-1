#include <SFML/Graphics.hpp>

#include "Game.h"
#include "Window.h"
#include <SFML/Audio.hpp>

int main(){
    int gameState;
    sf::Music music;
    bool check;
    bool startgame=false;
    bool endgame=false;

    if (!music.openFromFile("music.ogg"))
    std::cout<<"File Not Found"; // error

    music.play();// start music


    sf::Sprite sp_mainmenu;
    sf::Texture tex_mainmenu;
    tex_mainmenu.loadFromFile("mainmenu.png");
    sp_mainmenu.setTexture(tex_mainmenu);
    sp_mainmenu.setPosition(0,0);

    sf::RenderWindow window(sf::VideoMode(600, 600), "Main Menu");


    while (window.isOpen() && startgame==false && endgame==false)//both false -> keep main menu
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
                    if((x>0 && y>100) && (x<600 && y<300) )
                    {
                        startgame=true;
                        window.close();
                    }
                    if((x>0 && y>300) && (x<600 && y<450) )
                    {
                        endgame=true;
                        window.close();
                    }
                }
        }

        window.clear();
        window.draw(sp_mainmenu);
        window.display();
    }

    //comes afterward
    if(startgame==true && endgame==false)
    {
        Game game; // Creating our game object.


        while(game.GetWindow()->IsDone()==false)
        {
            // Game loop.

            gameState = game.Update(); //will return -1 for draw, 1 for user win, 2 for bot win. 0 for continue
            game.Render();

            if(gameState != 0)
            {
                game.displayMessage(gameState); //send which message to display. this func will also set isDone to true
            }
        }

    }

    return 0;
}
