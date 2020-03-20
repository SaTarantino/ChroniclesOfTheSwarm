#pragma once
#include "BaseCard.h"

//Base class for the Players object (Human and AI).
ref class Players
{
public:
	Players();

	void setTotalPower(int &power);
	int getTotalPower(int);

private:
	int totalPower;
};
