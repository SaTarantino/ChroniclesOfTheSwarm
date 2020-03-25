#include <cstdlib>
#include <time.h>
#include "MatchClass.h"
#include "BaseCard.h"
#include "PowerUpCard.h"
#include "PowerDownCard.h"

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
		m = rand() % 2;
		if (m == 0)
		{
			deck[i] = gcnew PowerUpCard;
		}
		else if (m == 1)
		{
			deck[i] = gcnew PowerDownCard;
		}
	}
	return deck;
}

array<bool>^ MatchClass::setDeckKnolegde()
{
	int i;
	array<bool> ^boolArray = gcnew array<bool>(ARRAY_SIZE);

	for (i = 0; i < ARRAY_SIZE; i++)
	{
		boolArray[i] = true;
	}
	return boolArray;
}