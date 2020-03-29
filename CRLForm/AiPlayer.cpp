#include <cstdlib>
#include <time.h>
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

///
/// Used to pick the next card to play.
/// Takes as argument the bool array used for keep track of the ai hand.
///
int AiPlayer::cardToPlay(array<bool> ^hand)
{
	// Do j++ if that "spot" in the hand if empty.
	// If the hand is empty return 6.
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		int j;
		if (hand[i] == false)
			j++;

		if (j == ARRAY_SIZE)
			return 6;
	}

	// If j is not equal to ARRAY_SIZE it'll keep generate a number
	// until it find a card to play.
	// This method is a bit slow (it take ~5 seconds to find the 4th and 5th card)
	// but is the most efficent and reliable method I have found.
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
