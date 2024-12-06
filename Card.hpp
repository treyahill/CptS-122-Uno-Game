#pragma once
#include <iostream>
#include "Shortcuts.hpp"
#include <SFML/Graphics.hpp>

using std::cout;

class Card {
private:
	sf::Color color;
	int value;
	bool wild;

public:
	Card(sf::Color newColor = sf::Color::Transparent, int newValue = OUTBOUND, bool newWild = false) {
		color = newColor;
		value = newValue;
		wild = newWild;
	}

	// Getters
	sf::Color GetColor() const;
	int GetValue() const;
	bool IsWild() const;

	// Setters
	void SetColor(sf::Color);
	void SetValue(int newValue);
	void SetWild(bool isWild);

	std::string ColorToString(sf::Color colorType);  //helper function for printing/representing color values as text

};

