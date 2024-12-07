#include <iostream>
#include <vector>
#include "Card.hpp"
#include "Errors.hpp"


class Deck {
private: 
	std::vector<Card> deck;	// When Drawing Cards, Avoid deck.front();
	
	Card curentCard;
	int plusFourStack;
	int plusTwoStack;
public:
	Errors error;
	
	Deck() {
		GenerateDeck(deck);
	}

	std::vector<Card> GenerateDeck(std::vector<Card>& deck);
	std::vector<Card>& GetDeck();

	void FirstShuffle(std::vector<Card>& deck);	// Call at the start of the game
	void Shuffle(std::vector<Card>& deck);	// Call during game (it leaves the top currentCard on the top of the deck

	Card GetPlayCard(std::vector<Card> deck);
	bool Compare(Card one, Card two);

	Card DrawCard(std::vector<Card>& deck);
 

	//void PlayCard(Card card, std::vector<Card>& deck, std::vector<Card>& hand);




};

