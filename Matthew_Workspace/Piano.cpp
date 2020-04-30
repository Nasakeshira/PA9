#include "Piano.h"

using namespace sf;

SoundBuffer Piano::loadSound()
{
	SoundBuffer buffer[7];
	
	// buffer.loadFromSamples(&samples[0], samples.size(), 2, 44100);
	
	//A
	buffer[0].loadFromFile("../PA9/Matthew_Workspace/Sound.wav");
	//B
	buffer[1].loadFromFile("../PA9/Matthew_Workspace/Sound.wav");
	//C
	buffer[2].loadFromFile();
	//D
	buffer[3].loadFromFile();
	//E
	buffer[4].loadFromFile();
	//F
	buffer[5].loadFromFile();
	//G
	buffer[6].loadFromFile();

	return *buffer;
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