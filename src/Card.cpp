#include "Card.hpp"

sf::Color Card::GetColor() const{
	return this->color;
}
int Card::GetValue() const{
	return this->value;
}
bool Card::IsWild() const{
	return this->wild;
}

void Card::SetColor(sf::Color newColor) {
	this->color = newColor;
}
void Card::SetValue(int newValue) {
	this->value = newValue;
}
void Card::SetWild(bool isWild) {
	this->wild = isWild;
}

std::string Card::ColorToString(sf::Color colorType) {
if (colorType == sf::Color::Transparent) {
	return "Transparent";
}
if (colorType == sf::Color::Red) {
	return "Red";
}
if (colorType == sf::Color::Green) {
	return "Green";
}
if (colorType == sf::Color::Blue) {
	return "Blue";
}
if (colorType == sf::Color::Yellow) {
	return "Yellow";
}

//feel free to add more color conversions if needed, these were all I think we needed

}