#include "Card.hpp"

std::string Card::GetColor() const{
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