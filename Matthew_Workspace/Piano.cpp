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
	SoundBuffer buffer[7];

	// buffer.loadFromSamples(&samples[0], samples.size(), 2, 44100);

	// loadFromfile need to sample all the correct audio files

	//A
	buffer[0].loadFromFile("1g - white 1.wav");
	//B
	buffer[1].loadFromFile("3b - white 2.wav");
	//C
	buffer[2].loadFromFile("5c - white 3.wav");
	//D
	buffer[3].loadFromFile("6c# - white 4.wav");
	//E
	buffer[4].loadFromFile("8eb - white 5.wav");
	//F
	buffer[5].loadFromFile("10f - white 6.wav");
	//G
	buffer[6].loadFromFile("12 - white 7.wav");

	for (int index = 0; index < 7; index++)
	{
		sound[index].setBuffer(buffer[index]);
	}
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
