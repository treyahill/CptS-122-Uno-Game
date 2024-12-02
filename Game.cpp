#include "Game.hpp"

void Game::runGame() {
	for (int i = 0; i < this->gameDeck.GetDeck().size(); i++) {
		Card temp = this->gameDeck.GetDeck().at(i);
		std::cout << temp.GetColor() << ' ' << temp.GetValue() << std::endl;
	}


	//this->gameDeck.FirstShuffle(gameDeck.GetDeck());

}