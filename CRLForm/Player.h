#pragma once

///
/// Class for the User Player
///
ref class Player
{
public:
	Player();

	void setTotalPower(int power);
	int getTotalPower();

private:
	int totalPower = 0;
};
