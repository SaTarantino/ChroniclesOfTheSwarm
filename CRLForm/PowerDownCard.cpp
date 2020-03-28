#include <cstdlib>
#include <random>
#include <ctime>
#include "PowerDownCard.h"

PowerDownCard::PowerDownCard() : BaseCard()
{
	setCardPower();
}

void PowerDownCard::setDetail(int power)
{
}

void PowerDownCard::setCardPower()
{
	cardPower = rand() % 9 + 1;
}

void PowerDownCard::cardEffect(TextBox ^, TextBox ^, TextBox ^, TextBox ^,
	TextBox ^, TextBox ^, array<BaseCard^>^, array<BaseCard^>^,
	array<bool>^, int)
{
}

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
