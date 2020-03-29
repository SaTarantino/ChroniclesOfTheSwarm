#pragma once

#define ARRAY_SIZE 5
///
/// Class for the AI Player.
///
ref class AiPlayer
{
public:
	AiPlayer();

	void setTotalPower(int power);
	int getTotalPower();
	int cardToPlay(array<bool> ^hand);
	int generateNumber();

private:
	int totalPower = 0;
	int card;
	int counter;
};
