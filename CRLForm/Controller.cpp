#include "Controller.h"
#include "BaseCard.h"
#include "PowerUpCard.h"
#include "PowerDownCard.h"
#include <cstdlib>

Controller::Controller()
{
}

int Controller::getCardsType(int cardType)
{
	generateNumber();
	if (n == 0)
	{
		//return 10;
		return PowerUpCard.getCardType(cardType);
	}
	if (n == 1)
	{
		//return 20;
		return PowerDownCard.getCardType(cardType);
	}
}

int Controller::getCardPower(int cardPower)
{
	return PowerDownCard.getCardPower(cardPower);
	//return n;
}

void Controller::generateNumber()
{
	n = rand() % 2;
}
