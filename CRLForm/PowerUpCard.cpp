#include <cstdlib>
#include <random>
#include <ctime>
#include "PowerUpCard.h"

PowerUpCard::PowerUpCard() : BaseCard()
{
	setCardPower();
}

void PowerUpCard::setDetail(int power)
{
	this->cardPower = power;
}

void PowerUpCard::setCardPower()
{
	cardPower = rand() % 9 + 11;
}

void PowerUpCard::cardEffect(TextBox ^, TextBox ^, TextBox ^, TextBox ^,
	TextBox ^, TextBox ^, array<BaseCard^>^, array<BaseCard^>^,
	array<bool>^, int)
{
}

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
