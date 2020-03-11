#pragma once
#include "PowerUpCard.h"

using namespace std;

ref class Controller
{
public:
	Controller();

	void getCardInfo(int cardType, int cardPower);

public:
	PowerUpCard a;

private:
	int type;
	int power;
	int name;
};
