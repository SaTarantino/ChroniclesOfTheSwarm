#include "PowerUpCard.h"

PowerUpCard::PowerUpCard(const int &cardID, const int &effID, int &cardPower)
	: Card(cardID, effID), cardPower(cardPower)
{
	setCardPower(cardPower);
}

void PowerUpCard::setCardPower(int &power)
{
	cardPower = power;
}

int PowerUpCard::getCardPower()
{
	return cardPower;
}

void PowerUpCard::cardEffect()
{
	if (cardPower > 0) {
		//Set the total power = cardPower;
	} // else destroy this card;
}
