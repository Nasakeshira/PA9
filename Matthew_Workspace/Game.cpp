#include "Game.h"
using namespace sf;

Game::Game()
: m_window (VideoMode(1280,720), "Paper Piano")
{
	t1.loadFromFile("images/white.png");
	t2.loadFromFile("images/black.png");

	Sprite sprite1(t1);
	Sprite sprite2(t2);

	// White Keys
	sf::RectangleShape rectangle(sf::Vector2f(20.f, 40.f));
	// rectangle.setSize(Vector2f(20.f, 40.f));
	rectangle.setFillColor(Color::White);

	// Black Keys
	sf::RectangleShape rectangle2(sf::Vector2f(20.f, 30.f));
	rectangle2.setFillColor(Color::Black);
	rectangle2.setOutlineThickness(3.f);
	rectangle2.setOutlineColor(Color::White);
	//rectangle2.setSize(sf::Vector2f(15.f, 30.f));


	m_window.draw(rectangle);
	m_window.draw(rectangle);
	m_window.draw(rectangle);
//
	m_window.draw(rectangle2);
	m_window.draw(rectangle2);
//
	m_window.draw(rectangle);
	m_window.draw(rectangle);
	m_window.draw(rectangle);
//
	m_window.draw(rectangle2);
	m_window.draw(rectangle2);
	m_window.draw(rectangle2);
//
	m_window.draw(rectangle);
	m_window.draw(rectangle);
	m_window.draw(rectangle);
//
	m_window.draw(rectangle2);
	m_window.draw(rectangle2);
//
	m_window.draw(rectangle);
	m_window.draw(rectangle);
	m_window.draw(rectangle);

//(255,255,255) - This is the white rbg code
//Black rbg code is (0, 0, 0)

	
	loadSound();
}

// Infinite loop that exits only when window is closed.
void Game::run()
{
	// srand(time(0));

	// Load textures

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
	//Sound A, B, C, D, E, F, G;
	// Too be added later in update CsDb, DsEb, FsGb, GsAb, AsBb;


	// White Keys
	if (Keyboard::isKeyPressed(Keyboard::A))
	{
		// C
		sound[2].play();
	}
	if (Keyboard::isKeyPressed(Keyboard::S))
	{
		// D
		sound[3].play();
	}
	if (Keyboard::isKeyPressed(Keyboard::D))
	{
		// E
		sound[4].play();
	}
	if (Keyboard::isKeyPressed(Keyboard::F))
	{
		// F
		sound[5].play();
	}
	if (Keyboard::isKeyPressed(Keyboard::G))
	{
		// G
		sound[6].play();
	}
	// Different octave
	if (Keyboard::isKeyPressed(Keyboard::H))
	{
		// A
		sound[0].play();
	}
	if (Keyboard::isKeyPressed(Keyboard::J))
	{
		// B
		sound[1].play();
	}
	if (Keyboard::isKeyPressed(Keyboard::K))
	{
		// C
		sound[2].play();
	}
	if (Keyboard::isKeyPressed(Keyboard::L))
	{
		// D
		sound[3].play();
	}
	if (Keyboard::isKeyPressed(Keyboard::SemiColon))
	{
		// E
		sound[4].play();
	}
	if (Keyboard::isKeyPressed(Keyboard::Quote))
	{
		// F
		sound[5].play();
	}
	if (Keyboard::isKeyPressed(Keyboard::Enter))
	{
		// G
		sound[6].play();
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
