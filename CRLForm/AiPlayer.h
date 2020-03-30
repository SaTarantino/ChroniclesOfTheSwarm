#pragma once
#include "BaseCard.h"

#define ARRAY_SIZE 5

///
/// Class for the AI Player.
///
ref class AiPlayer
{
public:
	AiPlayer();

	void setTotalPower(int power);
	int getTotalPower();
	int cardToPlay(array<bool> ^hand);
	array<BaseCard^> ^drawHand(array<BaseCard^> ^deck);
	int generateNumber(int);

private:
	int totalPower = 0;
	int counter;
};
