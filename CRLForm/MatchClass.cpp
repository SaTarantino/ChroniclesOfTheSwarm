#include <cstdlib>
#include "MatchClass.h"
#include "PowerUpCard.h"
#include "PowerDownCard.h"
#include "HumanPlayer.h"

MatchClass::MatchClass()
{
}

void MatchClass::GenerateDecks()
{
	list <BaseCard^> deck;
	for (int i = 0; i = MAXHAND; i++) {
		int n = rand() % 0;
		if (n = 0) 
		{
			deck.push_back(gcnew PowerUpCard);
		}
		if (n = 1)
		{
			deck.push_back(gcnew PowerDownCard);
		}
	}
}
