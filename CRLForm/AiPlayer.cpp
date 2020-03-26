#include <cstdlib>
#include <time.h>
#include "AiPlayer.h"
#include "MatchClass.h"

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
	int i;
	generateNumber(card);

	for (i = 0; i < ARRAY_SIZE; i++)
	{
		if (hand[card] == true)
		{
			return card;
		}
		else
		{
			generateNumber(card);
		}
	}

	/*do {
		card = rand() % 5;
	} while (hand[card] == false);*/
}

void AiPlayer::generateNumber(int n)
{
	srand(time(NULL));
	n = rand() % 5;
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
