#ifndef GAME_H
#define GAME_H

#include <memory>
#include <vector>
#include <SFML/Graphics.hpp>

// Creating game loop
// Handle player input, updating gamestate (I.E. button has been pressed play sound), render (load piano)
class Game
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

    bool m_shouldPop = false;

};

template<typename T, typename... Args>
void Game::pushState()
{

}



#endif