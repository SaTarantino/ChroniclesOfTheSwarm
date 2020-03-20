#include "Player.h"

Player::Player()
{
	setTotalPower(totalPower);
}

void Player::setTotalPower(int power)
{
	totalPower = totalPower + power;
}

int Player::getTotalPower()
{
	return totalPower;
}
