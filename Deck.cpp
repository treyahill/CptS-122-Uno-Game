#include "Deck.hpp"
#include <algorithm>
#include <random>


std::vector<Card>& Deck::GetDeck() {
	return this->deck;
}
std::vector<Card> Deck::GenerateDeck(std::vector<Card>& deck) {
	std::vector<Card> temp;
	Card empty;

	empty.SetValue(WILD_FOUR);	// Start Card at WILD_FOUR (Lowest Card)

	while (empty.GetValue() <= NINE) {	// Iterate Through Every Card Value // (fixed card generation yay!)

#pragma region .	Wild.Check
		if (empty.GetValue() <= WILD) {			// --- //when generating "Wilds", the program creates wild cards for each color (need to fix somehow)
			empty.SetWild(true);				// Wild Card Check and Set
		}										//
		else empty.SetWild(false);				// ---
#pragma endregion


#pragma region .	Insert.Cards

//	R E D   C A R D S
		empty.SetColor(sf::Color::Red);					// changed all colors from type string to type Color, technically does not matter because our project will be using sprites, but it's chill beans
		temp.insert(temp.begin(), empty);		//	Inserting RED Cards
		if (empty.GetValue() != 0 && empty.GetValue() > WILD) temp.insert(temp.begin(), empty);	// Double of Correct Cards
												
//	B L U E   C A R D S
		empty.SetColor(sf::Color::Blue);					//
		temp.insert(temp.begin(), empty);		//	Inserting BLUE Cards
		if (empty.GetValue() != 0 && empty.GetValue() > WILD) temp.insert(temp.begin(), empty);	// Double of Correct Cards
		
//	G R E E N   C A R D S
		empty.SetColor(sf::Color::Green);					//
		temp.insert(temp.begin(), empty);		//	Inserting GREEN Cards
		if (empty.GetValue() != 0 && empty.GetValue() > WILD) temp.insert(temp.begin(), empty);	// Double of Correct Cards
		
//	Y E L L O W   C A R D S
		empty.SetColor(sf::Color::Yellow);					//	
		temp.insert(temp.begin(), empty);		//	Inserting YELLOW Cards
		if (empty.GetValue() != 0 && empty.GetValue() > WILD) temp.insert(temp.begin(), empty);	// Double of Correct Cards
#pragma endregion
		// Wild Cards are Created with an inherent color but they will be Set when played

#pragma region .	Iterate.Card
		empty.SetValue(empty.GetValue() + 1);	// Iterate the Card
#pragma endregion

	}
	deck = temp;
	return deck;
}
void Deck::FirstShuffle(std::vector<Card>& deck) {

	std::random_device rd;
	std::vector<Card> temp;

	temp = deck;

	std::shuffle(temp.begin(), temp.end(), rd);

	deck = temp;

	return;
}
void Deck::Shuffle(std::vector<Card>& deck) {

	std::random_device rd;
	std::vector<Card> temp;

	temp = deck;

	std::shuffle(temp.begin() + 1, temp.end(), rd);

	deck = temp;

	return;
}
Card Deck::GetPlayCard(std::vector<Card> deck) {
	if (Compare(this->curentCard, deck[0])) {	// Valid Play Card Check
		return this->curentCard;
	}
	else exit(error.BAD_CARD);	// The Play Card did not match;

}
bool Deck::Compare(Card one, Card two) {		// To Make Sure 'Deck' class has the right currentCard lined up with deck[0]
	if (one.GetColor() == two.GetColor() && one.GetValue() == two.GetValue())
		return true;
	else return false;
}
Card Deck::DrawCard(std::vector<Card>& deck) {
	Card drawn;
	drawn = deck[1];

	deck.erase(deck.begin() + 1);	// Removes the Top Card from the deck (deck[0] is the card in play)

	return drawn;
}
//void Deck::PlayCard() {}