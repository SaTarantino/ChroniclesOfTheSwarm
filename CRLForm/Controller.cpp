#include <cstdlib>
#include "Controller.h"
#include "BaseCard.h"
#include "PowerUpCard.h"
#include "PowerDownCard.h"

Controller::Controller()
{
}

int Controller::getCardsType(int cardType)
{
	generateNumber();
	if (n == 0)
	{
		return PowerUpCard.getCardType(cardType);
	}
	if (n == 1)
	{
		return PowerDownCard.getCardType(cardType);
	}
}

int Controller::getCardPower(int cardPower)
{
	return PowerDownCard.getCardPower(cardPower);
}

void Controller::generateNumber()
{
	n = rand() % 2;
}
