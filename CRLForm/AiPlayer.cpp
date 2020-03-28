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
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		int j;
		if (hand[i] == false)
			j++;

		if (j == ARRAY_SIZE)
			return 6;
	}
	
	
	do {
		//srand(time(NULL));
		//card = rand() % 5;
		card = generateNumber();
	} while (hand[card] != true);
	
	//hand[card] = false;
	//counter++;

	/*if (counter == ARRAY_SIZE) 
	{
		return card, 6;
	}*/
	return card;
	
}

int AiPlayer::generateNumber()
{
	srand(time(NULL));
	int n = rand() % 5;
	return n;
}

void AiPlayer::play(array<bool> ^hand)
{
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		hand[i] = true;
	}
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
