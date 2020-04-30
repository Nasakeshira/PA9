#include "Game.h"
using namespace sf;

Game::Game()
: m_window (VideoMode(1280,720), "Piano")
{
	t1.loadFromFile("images/white.png");
	t2.loadFromFile("images/black.png");

	Sprite sprite1(t1);
	Sprite sprite2(t2);
}

// Infinite loop that exits only when window is closed.
void Game::run()
{
	SoundBuffer *hold = nullptr;
	// srand(time(0));
	// Load sound files
	*hold = Piano::loadSound();

	Sound sound[7];
	
	for (int index = 0; index < 7; index++)
	{
		sound[index].setBuffer(hold[index]);
	}

	// Load textures
	
	t1.loadFromFile("images/white.png");
	t2.loadFromFile("images/black.png");

	Sprite sprite1(t1);
	Sprite sprite2(t2);


	while (m_window.isOpen())
    {
		m_window.clear();

		for (int i = 0; i < whiteKeys; i++)
		{
			for (int j = 0; j < blackKeys; j++)
			{
				sprite1.setPosition(i * size, j * size);
				m_window.draw(sprite1);
			}
		}

		for (int i = 0; i < whiteKeys; i++)
		{
			for (int j = 0; j < blackKeys; j++)
			{
				sprite2.setPosition(i * size, j * size);
				m_window.draw(sprite2);
			}
		}
		handleInput();
        m_window.display();
        handleEvents();
    }
    
}

//void Game::tryPop()
//{
//
//}

// Get sound to play!
void Game::handleInput()
{
	Sound A, B, C, D, E, F, G;
	// Too be added later in update CsDb, DsEb, FsGb, GsAb, AsBb;

	A = sound[0];
	B = sound[1];
	C = sound[2];
	D = sound[3];
	E = sound[4];
	F = sound[5];
	G = sound[6];


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
	/*
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
	*/
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