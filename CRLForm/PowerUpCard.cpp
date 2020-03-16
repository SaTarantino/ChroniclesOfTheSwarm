#include <cstdlib>
#include "PowerUpCard.h"

PowerUpCard::PowerUpCard() : BaseCard() //int *cardT, int *power
{
	/*this->powerUPCard = *cardT;
	cardPower();
	this->cardPower = *power;*/
}

void PowerUpCard::setDetail(int *cardT, int *power)
{
	this->cType = *cardT;
	setCardPower();
	this->totalPower = *power;
}
void PowerUpCard::setCardPower()
{
	totalPower = rand() % 10 + 1;
}

void PowerUpCard::cardEffect()
{
	
}

int PowerUpCard::getCardType(int)
{
	return cType;
}

int PowerUpCard::getCardPower(int) 
{
	setCardPower();
	return totalPower;
}
