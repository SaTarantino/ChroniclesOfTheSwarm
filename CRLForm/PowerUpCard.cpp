#include <cstdlib>
#include <random>
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
	TextBox ^, TextBox ^, array<BaseCard^> ^, array<BaseCard^> ^,
	array<bool> ^, array<bool> ^, int)
{
}

int PowerUpCard::getCardType()
{
	return cardType;
}

int PowerUpCard::getCardPower()
{
	return cardPower;
}

String ^PowerUpCard::getInfo()
{
	String ^a = "Power Up Card: ";
	String ^b = Convert::ToString(getCardPower());
	String ^string;
	return string = (a + b);
}
