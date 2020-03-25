#include "Controller.h"
#include "BaseCard.h"
#include "PowerUpCard.h"
#include "PowerDownCard.h"
#include <time.h>
#include <random>

Controller::Controller()
{
}

void Controller::populateArray(array<int> ^array, int a, int b, int c, int d, int e)
{
	array[0] = a;
	array[1] = b;
	array[2] = c;
	array[3] = d;
	array[4] = e;
}
