#include "Controller.h"
#include "PowerUpCard.h"

using namespace std;

Controller::Controller()
{
}

void Controller::getCardInfo(int cardType, int cardPower)
{
	PowerUpCard a;
	a.getCardType(cardType);
	a.getCardPower(cardPower);
}
