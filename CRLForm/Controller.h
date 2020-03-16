#pragma once
#include "BaseCard.h"
#include "PowerUpCard.h"
#include "PowerDownCard.h"

using namespace std;

ref class Controller
{
public:
	Controller();

	int getCardsType(int cardType);
	int getCardPower(int cardPower);
	void generateNumber();

public:
	PowerUpCard PowerUpCard;
	PowerDownCard PowerDownCard;

private:
	int n;
};
