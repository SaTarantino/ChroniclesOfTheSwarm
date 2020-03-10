#include "Players.h"

Players::Players(int &power)
	: totalPower(power)
{
	totalPower = 0;
}

void Players::setTotalPower(int &power)
{
	totalPower = power;
}

int Players::getTotalPower()
{
	return totalPower;
}
