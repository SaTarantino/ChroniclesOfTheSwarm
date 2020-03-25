#include <cstdlib>
#include "AiPlayer.h"

AiPlayer::AiPlayer()
{
	setTotalPower(totalPower);
}

void AiPlayer::setTotalPower(int power)
{
	totalPower = totalPower + power;
}

int AiPlayer::getTotalPower()
{
	return totalPower;
}

int AiPlayer::cardToPlay(array<bool> ^hand)
{
	card = rand() % 5;

	do {
		card = rand() % 5;
	} while (hand[card] = true);
	
	return card;
}

void AiPlayer::play(array<BaseCard^> ^hand)
{
	/*if (hand[card]->getCardType == 0)
	{

	}*/
}


//void AiPlayer::playCard(int playerTotalPower, array<BaseCard^> ^deck, array<bool> ^boolArray)
//{
//	if (playerTotalPower >= totalPower)
//	{
//		if (hasPowerDownCard)
//		{
//			//play power down card
//		}
//		else if (!hasPowerDownCard)
//		{
//			 //play power up card
//		}
//	}
//	if (playerTotalPower < totalPower)
//	{
//		if (hasPowerUpCard)
//		{
//			//play power up card
//		}
//		else if (!hasPowerUpCard)
//		{
//			// play power down card
//		}
//	}
//}
