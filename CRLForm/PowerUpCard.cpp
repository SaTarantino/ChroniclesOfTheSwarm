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
	totalPower = rand() % 9 + 11;
}

//void PowerUpCard::cardEffect(int power, int tot)
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

int PowerUpCard::returnCardType()
{
	return cType;
}