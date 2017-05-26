#include <SFML/Graphics.hpp>
#include <iostream>
#include <stdexcept>
#include "Game.h"
#include "Window.h"
#include <SFML/Audio.hpp>

int main(){
    int gameState;
    sf::Music music;
    bool check;
    bool startgame=false;
    bool endgame=false;
    int diff;

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

                    try{

                        if((x>0 && y>100) && (x<600 && y<300) )
                        {
                            startgame=true;
                            window.close();
                            //throw(logical_error);
                        }
                        if((x>0 && y>300) && (x<600 && y<450) )
                        {
                            endgame=true;
                            window.close();
                        }
                            throw("Invalid Selection Made");
                    }catch(const char *x) // If the user clicks anywhere on the screen else than start and exit button this exception will be handled
                    {                       // and a message will be printed in console telling the player to either start or close the game.
                        if(startgame==false && endgame==false)
                        {

                        std::cout << x << std::endl;
                        }
                    }
                }

        }

        window.clear();
        window.draw(sp_mainmenu);
        window.display();
    }


    if(startgame==true && endgame==false)
    {
        sf::Sprite sp_diff;
        sf::Texture tex_diff;
        tex_diff.loadFromFile("diff.png");
        sp_diff.setTexture(tex_diff);
        sp_diff.setPosition(0,0);

        sf::RenderWindow window2(sf::VideoMode(600, 600), "Difficulty Select");


        while (window2.isOpen() && startgame==true && endgame==false)
        {
            sf::Event event;

            while (window2.pollEvent(event))
            {
                if(event.type == sf::Event::Closed)
                {
                    endgame = true;
                    window2.close();
                }

                if (event.type == sf::Event::MouseButtonReleased && event.mouseButton.button == sf::Mouse::Left)
                    {
                        int x = sf::Mouse::getPosition(window2).x;
                        int y = sf::Mouse::getPosition(window2).y;
                        std::cout << x << " -- " << y << std::endl;
                        if((x>0 && y>0) && (x<600 && y<300) )
                        {
                            diff=0;
                            window2.close();
                        }
                        if((x>0 && y>300) && (x<600 && y<600) )
                        {
                            diff=1;
                            window2.close();
                        }
                    }
            }

            window2.clear();
            window2.draw(sp_diff);
            window2.display();
        }
    }


    //comes afterward
    if(startgame==true && endgame==false)
    {
        Game game(diff); // Creating our game object. // difficulty passing


        while(game.GetWindow()->IsDone()==false)
        {
            // Game loop.

            gameState = game.Update(); //will return -1 for draw, 1 for user win, 2 for bot win. 0 for continue
            game.Render();

            if(gameState!=0)
            {
                game.displayMessage(gameState); //send which message to display. this func will also set isDone to true
            }
        }

    }

    return 0;
}
