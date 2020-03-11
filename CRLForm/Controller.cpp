#include "Controller.h"
#include "PowerUpCard.h"

using namespace std;

Controller::Controller()
{
}

int Controller::getCardType(int cardType)
{
	return a.getCardType(cardType);
}

int Controller::getCardPower(int cardPower)
{
	return a.getCardPower(cardPower);
}
