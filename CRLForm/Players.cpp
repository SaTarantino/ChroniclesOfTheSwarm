#include "Players.h"

Players::Players()
{
}

void Players::setTotalPower(int &power)
{
	totalPower = power;
}

int Players::getTotalPower(int)
{
	return totalPower;
}
