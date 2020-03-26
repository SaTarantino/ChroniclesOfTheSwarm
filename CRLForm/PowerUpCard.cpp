#include <cstdlib>
#include <random>
#include <ctime>
#include "PowerUpCard.h"

PowerUpCard::PowerUpCard() : BaseCard()
{
	setCardPower();
}

void PowerUpCard::setDetail(int *type, int *power)
{
	/*this->cardType = *type;
	setCardPower();
	this->cardPower = *power;*/
}

void PowerUpCard::setCardPower()
{
	cardPower = rand() % 9 + 11;
}

//void PowerUpCard::cardEffect(int power, int tot)
//{
//}

int PowerUpCard::getCardType(int)
{
	return cardType;
}

int PowerUpCard::getCardPower(int)
{
	return cardPower;
}

int PowerUpCard::returnCardType()
{
	return cardType;
}

int PowerUpCard::returnCardPower()
{
	return cardPower;
}
