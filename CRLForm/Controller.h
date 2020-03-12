#pragma once
#include "BaseCard.h"
#include "PowerUpCard.h"
#include "PowerDownCard.h"

using namespace std;

ref class Controller
{
public:
	Controller();

	int getCardType(int cardType);
	int getCardPower(int cardPower);

public:
	
	PowerUpCard PowerUpCard;
	PowerDownCard PowerDownCard;
};
