#pragma once
#include "BaseCard.h"

ref class AiPlayer
{
public:
	AiPlayer();

	void setTotalPower(int power);
	int getTotalPower();

	void setAiDeckKnolegde(array<BaseCard^> ^deck);
	void playCard(int playerTotalPower, array<BaseCard^> ^deck);

private:
	int totalPower = 0;
	int pUpCount;
	int pDownCount;
	bool hasPowerDownCard = false;
	bool hasPowerUpCard = false;
};
