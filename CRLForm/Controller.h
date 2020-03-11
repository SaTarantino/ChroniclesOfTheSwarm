#pragma once
#include "PowerUpCard.h"

using namespace std;

ref class Controller
{
public:
	Controller();

	int getCardType(int cardType);
	int getCardPower(int cardPower);

public:
	PowerUpCard a;
};
