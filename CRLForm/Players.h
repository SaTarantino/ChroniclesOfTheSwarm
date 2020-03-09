#pragma once
#include "Card.h"
ref class Players
{
public:
	Players(int &power);

	void setTotalPower(int &power);
	int getTotalPower();

	virtual void playerDeck() = 0;

private:
	int totalPower;
};

