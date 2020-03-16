#include <cstdlib>
#include "MatchClass.h"
#include "PowerUpCard.h"
#include "PowerDownCard.h"
#include "HumanPlayer.h"

MatchClass::MatchClass()
{
}

void MatchClass::generateDecks(System::Collections::Generic::List<BaseCard ^> ^in)
{
	// I have to decleare the List using this odd declaretion in order to avoid Error C3699.
	System::Collections::Generic::List<BaseCard^> ^deck;
	for (int i = 0; i = 2; i++) {
		int n = rand() % 1;
		if (n = 0) 
		{
			//deck.push_back(gcnew PowerUpCard);	// This down't works, here just as remember.
			//deck->AddFirst(gcnew PowerUpCard);	// This works with Linked List.
			deck->Add(gcnew PowerUpCard);
		}
		//if (n = 1)
		//{
		//	//deck.push_back(gcnew PowerDownCard);
		//	//deck->AddFirst(gcnew PowerDownCard);
		//	deck->Add(gcnew PowerDownCard);
		//}
	}
}
