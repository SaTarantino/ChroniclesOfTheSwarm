#pragma once

//Base class for the Card object.
ref class Card
{
public:
	Card();

	virtual int cardType(int) = 0;
	virtual int cardPower() = 0;
	virtual void cardEffect() = 0;
};
