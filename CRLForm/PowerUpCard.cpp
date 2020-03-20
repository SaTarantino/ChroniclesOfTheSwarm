#include <cstdlib>
#include <random>
#include <ctime>
#include "PowerUpCard.h"

PowerUpCard::PowerUpCard() : BaseCard()
{
}

void PowerUpCard::setDetail(int *cardT, int *power)
{
	this->cType = *cardT;
	setCardPower();
	this->totalPower = *power;
}

void PowerUpCard::setCardPower()
{
	totalPower = rand() % 10 + 5;
}

//void PowerUpCard::cardEffect()
//{
//}

int PowerUpCard::getCardType(int)
{
	return cType;
}

int PowerUpCard::getCardPower(int)
{
	setCardPower();
	return totalPower;
}
