#ifndef PIANO_H
#define PIANO_H
// May not need <iostream>
#include <iostream>
#include <SFML/Audio.hpp>


class Piano
{
private:

public:
// Tentative structure for programs
	Piano();

	~Piano();

	sf::Sound A;

	sf::Sound B;

	sf::Sound C;

	sf::Sound D;

	sf::Sound E;

	sf::Sound F;

	sf::Sound G;

	void loadSound();

// Maybe include a thing where people can play a piano together? Using <SFML/Network.hpp>

// void downShiftOctave(); if isKeyPressed right shift

// void upShiftOctave(); if isKeyPressed left shift

};

#endif