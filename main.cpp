#include <iostream>
#include "Game.hpp"
#include <SFML/Graphics.hpp>

int main() {

	static float const winW = 1000;
	static float const winH = 500;
	sf::RenderWindow window(sf::VideoMode(winW, winH), "Uno Game");

	sf::RectangleShape base;
	sf::Color white = sf::Color::White;
	sf::Color color = sf::Color::Red;

	


	Game Uno;
	std::cout << 1;
	Uno.runGame();

	return 0;
}