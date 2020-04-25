#include "Piano.h"

using namespace sf;

SoundBuffer Piano::loadSound()
{
	std::vector<sf::Int16> samples = ...;
	SoundBuffer buffer;
	
	buffer.loadFromSamples(&samples[0], samples.size(), 2, 44100);

	return buffer;
}