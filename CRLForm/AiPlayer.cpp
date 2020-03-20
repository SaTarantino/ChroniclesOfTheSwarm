#include "AiPlayer.h"

AiPlayer::AiPlayer()
{
	setTotalPower(totalPower);
}

void AiPlayer::setTotalPower(int power)
{
	totalPower = power;
}

int AiPlayer::getTotalPower()
{
	return totalPower;
}

void AiPlayer::setAiDeckKnolegde(array<BaseCard^> ^deck)
{
	int i;
	for each (BaseCard ^T in deck)
	{
		if (deck[i]->getCardType == 0)
		{
			hasPowerUpCard = true;
			pUpCount++;
			i++;
		}
		else if (deck[i]->getCardType == 1)
		{
			hasPowerDownCard = true;
			pDownCount++;
			i++;
		}
	}
}

void AiPlayer::playCard(int playerTotalPower, array<BaseCard^> ^deck)
{
	if (playerTotalPower >= totalPower)
	{
		if (hasPowerDownCard)
		{
			//play power down card

		}
		else if (!hasPowerDownCard)
		{
			 //play power up card
		}
	}

	if (playerTotalPower < totalPower)
	{
		if (hasPowerUpCard)
		{
			//play power up card
		}
		else if (!hasPowerUpCard)
		{
			// play power down card
		}
	}
}
