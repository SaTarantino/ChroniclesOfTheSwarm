#pragma once
#include "BaseCard.h"

//Base class for the Players object (human and AI).
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
