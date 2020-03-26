#include <cstdlib>
#include <random>
#include <ctime>
#include "PowerDownCard.h"

PowerDownCard::PowerDownCard() : BaseCard()
{
	setCardPower();
}

void PowerDownCard::setDetail(int *type, int *power)
{
	/*this->cardType = *type;
	setCardPower();
	this->cardPower = *power;*/
}

void PowerDownCard::setCardPower()
{
	cardPower = rand() % 9 + 1;
}

//void PowerDownCard::cardEffect(int, int)
//{
//}

int PowerDownCard::getCardType(int)
{
	return cardType;
}

int PowerDownCard::getCardPower(int)
{
	return cardPower;
}

int PowerDownCard::returnCardType()
{
	return cardType;
}

int PowerDownCard::returnCardPower()
{
	return cardPower;
}
