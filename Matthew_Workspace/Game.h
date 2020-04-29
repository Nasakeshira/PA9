#ifndef GAME_H
#define GAME_H

#include <memory>
#include <vector>
#include "Piano.h"

// Creating game loop
// Handle player input, updating gamestate (I.E. button has been pressed play sound), render (load piano)
class Game
    :public Piano
{
public:
    Game();

    void run();

    template<typename T, typename... Args>
    void pushState(Args&&... args);

    void popState();

private:
    sf::RenderWindow m_window;

    void tryPop();

    void handleEvents();

    void handleInput(SoundBuffer buffer[], Sound sound[]);

    bool m_shouldPop = false;

};

//template<typename T, typename... Args>
//void Game::pushState()
//{
//
//}

#endif