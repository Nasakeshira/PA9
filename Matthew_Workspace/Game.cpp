#include "Game.h"
using namespace sf;

Game::Game()
: m_window (VideoMode(1280,720), "Piano Classics")
{
    
}

// Infinite loop that exits only when window is closed.
void Game::run()
{

    while (m_window.isOpen())
    {
        m_window.clear();

        m_window.display();
        handleEvents();
        tryPop();
    }
    
}

void Game::tryPop()
{

}

// Get sound to play!
void Game::handleInput(SoundBuffer buffer[], Sound sound[])
{
	Sound A,B,C,D,E,F,G,CsDb,DsEb,FsGb,GsAb,AsBb;

	// Sound sound[7];

	// White Keys
	if (Keyboard::isKeyPressed(Keyboard::A))
	{
		C.play();
	}
	if (Keyboard::isKeyPressed(Keyboard::S))
	{
		D.play();
	}
	if (Keyboard::isKeyPressed(Keyboard::D))
	{
		E.play();
	}
	if (Keyboard::isKeyPressed(Keyboard::F))
	{
		F.play();
	}
	if (Keyboard::isKeyPressed(Keyboard::G))
	{
		G.play();
	}
	// Different octave
	if (Keyboard::isKeyPressed(Keyboard::H))
	{
		A.play();
	}
	if (Keyboard::isKeyPressed(Keyboard::J))
	{
		B.play();
	}
	if (Keyboard::isKeyPressed(Keyboard::K))
	{
		C.play();
	}
	if (Keyboard::isKeyPressed(Keyboard::L))
	{
		D.play();
	}
	if (Keyboard::isKeyPressed(Keyboard::SemiColon))
	{
		E.play();
	}
	if (Keyboard::isKeyPressed(Keyboard::Quote))
	{
		F.play();
	}
	if (Keyboard::isKeyPressed(Keyboard::Enter))
	{
		G.play();
	}

	// Black Keys
	if (Keyboard::isKeyPressed(Keyboard::W))
	{
		CsDb.play();
	}
	if (Keyboard::isKeyPressed(Keyboard::E))
	{
		DsEb.play();
	}
	if (Keyboard::isKeyPressed(Keyboard::T))
	{
		FsGb.play();
	}
	if (Keyboard::isKeyPressed(Keyboard::Y))
	{
		GsAb.play();
	}
	if (Keyboard::isKeyPressed(Keyboard::U))
	{
		AsBb.play();
	}
	// Different octave
	if (Keyboard::isKeyPressed(Keyboard::O))
	{
		CsDb.play();
	}
	if (Keyboard::isKeyPressed(Keyboard::P))
	{
		DsEb.play();
	}
}

void Game::handleEvents()
{
    Event e;

    while(m_window.pollEvent(e))
    {
        switch (e.type)
        {
        case sf::Event::Closed:
            m_window.close();
            break;
        default:
            break;
        }
    }
}

void Game::popState()
{
    m_shouldPop = true;
}