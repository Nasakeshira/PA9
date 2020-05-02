#ifndef GAME_H
#define GAME_H

#include <memory>
#include <vector>
#include <time.h>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "Piano.h"

// Creating game loop
// Handle player input, updating gamestate (I.E. button has been pressed play sound), render (load piano)
class Game
    :public Piano
{
public:
    Game();

    void run();

    //template<typename T, typename... Args>
    //void pushState(Args&&... args);

    void popState();

private:
    sf::RenderWindow m_window;

    sf::Texture t1;
    sf::Texture t2;

    sf::Sprite sprite1;
    sf::Sprite sprite2;

    Piano piano;
    
    sf::Sound sound[7];

    // Private members
    int size = 16;
    int whiteKeys = 12;
    int blackKeys = 7;
    int W = size * whiteKeys;
    int B = size * blackKeys;
    
    // void tryPop();

    void handleEvents();

    void handleInput();

    bool m_shouldPop = false;

};

//template<typename T, typename... Args>
//void Game::pushState()
//{
//
//}

#endif