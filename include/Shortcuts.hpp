#pragma once

#include <SFML/Graphics/Color.hpp>
// Card Values
const int OUTBOUND	= -6;
const int WILD_FOUR	= -5;
const int WILD		= -4;
const int PLUS_TWO	= -3;
const int REVERSE	= -2;	// Toggle Bool "direction" or if(players.count <= 2) game.turn == [same player]
const int SKIP		= -1;	// Skip players.list[i + 1]
const int ZERO		= 0;
const int ONE		= 1;
const int TWO		= 2;
const int THREE		= 3;
const int FOUR		= 4;
const int FIVE		= 5;
const int SIX		= 6;
const int SEVEN		= 7;
const int EIGHT		= 8;
const int NINE		= 9;

// Colors
std::string const RED
				= "Red";
std::string const BLUE
				= "Blue";
std::string const GREEN
				= "Green";
std::string const YELLOW
				= "Yellow";