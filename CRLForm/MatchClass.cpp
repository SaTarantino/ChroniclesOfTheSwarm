#include <cstdlib>
#include <time.h>
#include "MatchClass.h"
#include "BaseCard.h"
#include "PowerUpCard.h"
#include "PowerDownCard.h"
#include "StealCard.h"

#define DECK_SIZE 20

MatchClass::MatchClass()
{
}

///
/// Function used for generate the Deck.
///
array<BaseCard^> ^MatchClass::generateDeck()
{
	int i, m;
	array<BaseCard^> ^deck = gcnew array<BaseCard^>(DECK_SIZE);

	srand(time(NULL));

	for (i = 0; i < DECK_SIZE; i++)
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

///
/// This function is only used for set the elements in an array of boolean as true.
///
void MatchClass::setHandKnolegde(array<bool> ^deck)
{
	for (int i = 0; i < 5; i++)
	{
		deck[i] = true;
	}
}
