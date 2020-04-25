#ifndef PIANO_H
#define PIANO_H
// May not need <iostream>
#include <iostream>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

class Piano
{
private:

public:
// Tentative structure for programs
void playSound();

void loadSound();

void displayKeys();

// Maybe include a thing where people can play a piano together? Using <SFML/Network.hpp>
void displayMenu();

void downShiftOctave();

void upShiftOctave();

};

#endif