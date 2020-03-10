#include <cstdlib>
#include "PowerUpCard.h"

PowerUpCard::PowerUpCard(int *cardT, int *power) : Card()
{
	this->powerUPCard = *cardT;
	cardPower();
	this->cardPower = *power;
}

int PowerUpCard::cardType(int)
{
	return powerUPCard;
}

int PowerUpCard::cardPower()
{
	totalPower = rand() % 10 + 1;
}

void PowerUpCard::cardEffect()
{
	
}
