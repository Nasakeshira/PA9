#include "Piano.h"

using namespace sf;

Piano::Piano()
{

}

Piano::~Piano()
{

}

void Piano::loadSound()
{
	SoundBuffer buffer1,buffer2,buffer3,buffer4,buffer5,buffer6,buffer7;

	// buffer.loadFromSamples(&samples[0], samples.size(), 2, 44100);

	// loadFromfile need to sample all the correct audio files

	//A
	buffer1.loadFromFile("1g - white 1.wav");
	//B
	buffer2.loadFromFile("3b - white 2.wav");
	//C
	buffer3.loadFromFile("5c - white 3.wav");
	//D
	buffer4.loadFromFile("6c# - white 4.wav");
	//E
	buffer5.loadFromFile("8eb - white 5.wav");
	//F
	buffer6.loadFromFile("10f - white 6.wav");
	//G
	buffer7.loadFromFile("12 - white 7.wav");
}

/* void playSound()
{
	while(m_window.isOpen())
	{
		if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
		{
			sound.play()
		}
		if(sf::KeyBoard::isKeyPressed(sf::Keyboard::B))
		{
			soudn.play()
		}
		if(sf::Keyboard::isKeyPressed(sf::Keyboard::C))
		{
			sound.play()
		}
		if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		{
			sound.play()
		}
		if(sf::Keyboard::isKeyPressed(sf::Keyboard::E))
		{
			sound.play()
		}
		if(sf::Keyboard::isKeyPressed(sf::Keyboard::F))
		{
			sound.play()
		}
		if(sf::Keyboard::isKeyPressed(sf::Keyboard::G))
		{
			sound.play()
		}
	}*/
