#include <iostream>
#include "Game.hpp"
#include <SFML/Graphics.hpp>

int main() {


		static float const winW = 1000;
		static float const winH = 500;

		sf::RenderWindow window(sf::VideoMode(winW, winH), "Uno Game");
		sf::RectangleShape base(sf::Vector2f(100, 50));

        sf::Texture red_card;
        if (!red_card.loadFromFile("assets/R.Zero.png")) {
            std::cout << "error loading image" << std::endl;
            return -1;
        }

        sf::Sprite Red_card; Red_card.setTexture(red_card);
        Red_card.setScale(56.f / red_card.getSize().x, 89.f / red_card.getSize().y);
        Red_card.setPosition((winW - 56) / 2, (winH - 89) / 2);

        while (window.isOpen()) {
            sf::Event event;
            while (window.pollEvent(event)) {
                if (event.type == sf::Event::Closed)
                    window.close();
            }

            // Clear the window
            window.clear();

            // Draw the sprite
            window.draw(Red_card);

            // Display the changes
            window.display();
        }

	Game Uno;
	Uno.runGame();

	

	return 0;
}