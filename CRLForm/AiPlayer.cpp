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
		card = generateNumber();
	} while (hand[card] != true);
	
	return card;
}

int AiPlayer::generateNumber()
{
	srand(time(NULL));
	int n = rand() % 5;
	return n;
}
