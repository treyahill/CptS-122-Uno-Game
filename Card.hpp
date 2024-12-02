#pragma once
#include <iostream>
#include "Shortcuts.hpp"
#include <SFML/Graphics.hpp>

class Card {
private:
	sf::Color color;
	int value;
	bool wild;

public:
	Cards(sf::Color newColor = sf::Color::Transparent, int newValue = OUTBOUND, bool newWild = false) {
		color(newColor), value(newValue), wild(newWild)
	}

	// Getters
	std::string GetColor() const;
	int GetValue() const;
	bool IsWild() const;

	// Setters
	void SetColor(sf::Color newColor);
	void SetValue(int newValue);
	void SetWild(bool isWild);
};

