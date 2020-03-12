#include "Controller.h"
#include "BaseCard.h"
#include "PowerUpCard.h"
#include "PowerDownCard.h"
#include "MatchClass.h"

Controller::Controller()
{
}

int Controller::getCardType(int cardType)
{
	//return PowerUpCard.getCardType(cardType);
	
}

int Controller::getCardPower(int cardPower)
{
	return PowerDownCard.getCardPower(cardPower);
}
