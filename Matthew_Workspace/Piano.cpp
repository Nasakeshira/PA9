#include "Piano.h"

using namespace sf;

SoundBuffer Piano::loadSound()
{
	SoundBuffer buffer[7];
	
	// buffer.loadFromSamples(&samples[0], samples.size(), 2, 44100);

	// loadFromfile need to sample all the correct audio files
	
	//A
	buffer[0].loadFromFile("../PA9/Matthew_Workspace/Sound.wav");
	//B
	buffer[1].loadFromFile("../PA9/Matthew_Workspace/Sound.wav");
	//C
	buffer[2].loadFromFile("../PA9/Matthew_Workspace/Sound.wav");
	//D
	buffer[3].loadFromFile("../PA9/Matthew_Workspace/Sound.wav");
	//E
	buffer[4].loadFromFile("../PA9/Matthew_Workspace/Sound.wav");
	//F
	buffer[5].loadFromFile("../PA9/Matthew_Workspace/Sound.wav");
	//G
	buffer[6].loadFromFile("../PA9/Matthew_Workspace/Sound.wav");

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