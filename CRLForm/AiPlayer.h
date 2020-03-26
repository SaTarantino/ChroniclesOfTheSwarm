#pragma once
#include "BaseCard.h"

#define ARRAY_SIZE 5

ref class AiPlayer
{
public:
	AiPlayer();

	void setTotalPower(int power);
	int getTotalPower();
	int cardToPlay(array<bool> ^);
	void play(array<BaseCard^> ^);

	void generateNumber(int);
	//void playCard(int playerTotalPower, array<BaseCard^> ^deck, array<bool> ^boolArray);

private:
	int totalPower = 0;
	int card;
};
