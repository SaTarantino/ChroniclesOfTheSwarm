#include <cstdlib>
#include <time.h>
#include "MatchClass.h"
#include "BaseCard.h"
#include "PowerUpCard.h"
#include "PowerDownCard.h"
#include "StealCard.h"

using namespace System;
#define ARRAY_SIZE 5

MatchClass::MatchClass()
{
}

array<BaseCard^> ^MatchClass::generateDeck()
{
	int i, m;
	array<BaseCard^> ^deck = gcnew array<BaseCard^>(ARRAY_SIZE);
	srand(time(NULL));
	for (i = 0; i < ARRAY_SIZE; i++)
	{
		m = rand() % 3;
		if (m == 0)
		{
			deck[i] = gcnew PowerUpCard;
		}
		else if (m == 1)
		{
			deck[i] = gcnew PowerDownCard;
		}
		else if (m == 2)
		{
			deck[i] = gcnew StealCard;
		}
	}
	return deck;
}

void MatchClass::setHandKnolegde(array<bool> ^deck)
{
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		deck[i] = true;
	}
}

void MatchClass::checkGameStatus(array<bool> ^playerHand, array<bool> ^aiHand)
{
	int i, playerCount, aiCount;

	for (i = 0; i < ARRAY_SIZE; i++)
	{
		if (playerHand[i] == false)
			playerCount++;

		if (aiHand[i] == false)
			aiCount++;
	}

	if (playerCount == ARRAY_SIZE)
	{
	}
}
