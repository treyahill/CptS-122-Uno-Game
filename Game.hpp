#include <iostream>
#include "Deck.hpp"
#include "Player.hpp"

#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Color.hpp>

class Game {
private:

public:	//should add helper methods for execution

	Game() { };
	~Game() { };

	Deck gameDeck;

	void runGame();

};