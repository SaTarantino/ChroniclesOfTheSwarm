#include "Controller.h"
#include "BaseCard.h"
#include "PowerUpCard.h"
#include "PowerDownCard.h"
#include <time.h>
#include <random>

Controller::Controller()
{
}

int Controller::getCardsType(int n, int cardType)
{
	if (n == 0)
	{
		return PowerUpCard.getCardType(cardType);
	}
	if (n == 1)
	{
		return PowerDownCard.getCardType(cardType);
	}
}

int Controller::getCardPower(int n, int cardPower)
{
	if (n == 0) 
	{
		return PowerUpCard.getCardPower(cardPower);
	}
	if (n == 1)
	{
		return PowerDownCard.getCardPower(cardPower);
	}
}

// Obsolite
//void Controller::generateNumber()
//{
//	//srand(time(NULL));
//	n = rand() % 2;
//}

array<Int32> ^Controller::generateDeck()
{
	int i, m;
	array<Int32> ^deck = gcnew array<Int32>(ARRAY_SIZE);
	srand(time(NULL));
	for (i = 0; i < ARRAY_SIZE; i++)
	{
		m = rand() % 2;
		deck[i] = m;
	}
	return deck;
}