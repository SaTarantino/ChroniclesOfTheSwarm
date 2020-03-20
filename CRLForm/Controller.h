#pragma once
#include "BaseCard.h"
#include "PowerUpCard.h"
#include "PowerDownCard.h"

using namespace System;
#define ARRAY_SIZE 5

ref class Controller
{
public:
	Controller();

	//int getCardsType(int n, int cardType);
	//int getCardPower(int n, int cardPower);
	//void generateNumber(); //Obsolete

	//array<Int32> ^generateDeck();

public:
	PowerUpCard PowerUpCard;
	PowerDownCard PowerDownCard;
};
