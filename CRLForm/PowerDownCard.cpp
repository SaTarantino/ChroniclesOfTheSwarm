#include <cstdlib>
#include "PowerDownCard.h"

PowerDownCard::PowerDownCard() : BaseCard()
{
}

void PowerDownCard::setDetail(int *cardT, int *power)
{
	this->cType = *cardT;
	setCardPower();
	this->totalPower = *power;
}

void PowerDownCard::setCardPower()
{
	totalPower = rand() % 10 + 1;
}

void PowerDownCard::cardEffect()
{
}

int PowerDownCard::getCardType(int)
{
	return cType;
}

int PowerDownCard::getCardPower(int)
{
	setCardPower();
	return totalPower;
}
