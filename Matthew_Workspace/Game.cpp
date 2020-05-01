#include "Game.h"
using namespace sf;

Game::Game()
: m_window (VideoMode(973,420), "Paper Piano")
{
	/*t1.loadFromFile("images/white.png");
	t2.loadFromFile("images/black.png");*/

	Sprite sprite1(t1);
	Sprite sprite2(t2);


	//(255,255,255) - This is the white rbg code
	//Black rbg code is (0, 0, 0)

	Piano piano;

	piano.loadSound();
}

// Infinite loop that exits only when window is closed.
void Game::run()
{
	// srand(time(0));

	// Load textures

		// White Keys
	sf::RectangleShape rectangle(sf::Vector2f(120.f, 360.f));
	// Redundant for now, reinstate if key sizes are wrong
	// rectangle.setSize(Vector2f(20.f, 40.f));
	rectangle.setFillColor(Color::White);

	// Black Keys
	sf::RectangleShape rectangle2(sf::Vector2f(90.f, 240.f));
	rectangle2.setFillColor(Color::Black);
	rectangle2.setOutlineThickness(3.f);
	rectangle2.setOutlineColor(Color::White);
	//rectangle2.setSize(sf::Vector2f(15.f, 30.f));

	while (m_window.isOpen())
    {
		handleEvents();
		
		handleInput();

		m_window.clear();

		//for (int i = 0; i < whiteKeys; i++)
		//{
		//	for (int j = 0; j < blackKeys; j++)
		//	{
		//		sprite1.setPosition(i * size, j * size);
		//		m_window.draw(sprite1);
		//	}
		//}


		//for (int i = 0; i < whiteKeys; i++)
		//{
		//	for (int j = 0; j < blackKeys; j++)
		//	{
		//		sprite2.setPosition(i * size, j * size);
		//		m_window.draw(sprite2);
		//	}
		//}

		// draw
		// White Keys
		rectangle.setPosition(Vector2f(0.f, 0.f));
		m_window.draw(rectangle);
		rectangle.setPosition(Vector2f(122.f, 0.f));
		m_window.draw(rectangle);
		rectangle.setPosition(Vector2f(244.f, 0.f));
		m_window.draw(rectangle);
		// White Keys
		rectangle.setPosition(Vector2f(366.f, 0.f));
		m_window.draw(rectangle);
		rectangle.setPosition(Vector2f(488.f, 0.f));
		m_window.draw(rectangle);
		rectangle.setPosition(Vector2f(610.f, 0.f));
		m_window.draw(rectangle);
		// White Keys
		rectangle.setPosition(Vector2f(732.f, 0.f));
		m_window.draw(rectangle);
		rectangle.setPosition(Vector2f(854.f, 0.f));
		m_window.draw(rectangle);
		// To Be Added in v2.0
		/*
		rectangle.setPosition(Vector2f(976.f, 0.f));
		m_window.draw(rectangle);
		// White Keys
		rectangle.setPosition(Vector2f(1088.f, 0.f));
		m_window.draw(rectangle);
		rectangle.setPosition(Vector2f(1210.f, 0.f));
		m_window.draw(rectangle);
		rectangle.setPosition(Vector2f(1333.f, 0.f));
		m_window.draw(rectangle);
		*/

		//Black Keys 1st Block
		rectangle2.setPosition(Vector2f(77.f, 0.f));
		m_window.draw(rectangle2);
		rectangle2.setPosition(Vector2f(197.f, 0.f));
		m_window.draw(rectangle2);
		// 2nd block
		rectangle2.setPosition(Vector2f(443.f, 0.f));
		m_window.draw(rectangle2);
		rectangle2.setPosition(Vector2f(565.f, 0.f));
		m_window.draw(rectangle2);
		rectangle2.setPosition(Vector2f(687.f, 0.f));
		m_window.draw(rectangle2);
		// Black Keys 3rd Block
		rectangle2.setPosition(Vector2f(931.f, 0.f));
		m_window.draw(rectangle2);
		//m_window.draw(rectangle2);

        m_window.display();
       
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

	sf::SoundBuffer buff;

	buff.loadFromFile("sound.wav");

	sf::Sound C;

	C.setBuffer(buff);

	// White Keys
	if (Keyboard::isKeyPressed(Keyboard::Left))
	{
		// C
		C.play();
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
