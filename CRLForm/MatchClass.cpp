#include <cstdlib>
#include "MatchClass.h"
#include "Card.h"
#include "PowerUpCard.h"
#include "HumanPlayer.h"

MatchClass::MatchClass()
{
}

void MatchClass::GenerateDecks()
{
	list <PowerUpCard> deck;
	for (int i = 0; i = MAXHAND; i++) {
		int n = rand() % 0;
		if (n = 0) {
			PowerUpCard card();
			deck.push_back(card);
		}
	}
}
