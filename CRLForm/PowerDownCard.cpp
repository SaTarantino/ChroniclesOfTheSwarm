#include <cstdlib>
#include <random>
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
	cardPower = rand() % 9 + 6;
}

void PowerDownCard::cardEffect(TextBox ^, TextBox ^, TextBox ^, TextBox ^,
	TextBox ^, TextBox ^, array<BaseCard^> ^, array<BaseCard^> ^,
	array<bool> ^, array<bool> ^, int)
{
}

int PowerDownCard::getCardType()
{
	return cardType;
}

int PowerDownCard::getCardPower()
{
	return cardPower;
}
