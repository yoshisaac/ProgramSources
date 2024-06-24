#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

void prntSpaces(int NumberOfCharacters, string Character)
{
	for (int c = 0; c < NumberOfCharacters; c++) { cout << Character; } //prints what ever you want the number of times you specify
}

int main()
{
	srand(time(NULL));
	const string space = " ";

	cout << "Character to print: ";
	char Character = getchar();

	if (cin.fail())
	{
		cin.ignore(99999, '\n');
		cin.clear();
		system("cls");
		main();
	}

	int WaveLengthBack = 0; //lets start from 0 because why not
	int WaveLengthForward = rand()%17; // pick a random number

	while (true)
	{	

		for (int spaces = WaveLengthBack; spaces < WaveLengthForward; spaces++)
		{ prntSpaces(spaces, space); cout << Character << '\n'; Sleep(45); }

		WaveLengthBack = rand()%17; //pick a new number
		while (!(WaveLengthBack < WaveLengthForward)) // Check for if the random number we generated is valid for the forloop
		{ WaveLengthBack = rand()%17; }

		for (int spaces = WaveLengthForward; spaces > WaveLengthBack; spaces--)
		{ prntSpaces(spaces, space); cout << Character << '\n'; Sleep(45); }

		WaveLengthForward = rand()%17; //pick a new number
		while (!(WaveLengthBack < WaveLengthForward)) // Check for if the random number we generated is valid for the forloop
		{ WaveLengthForward = rand()%17; }
	}
	return 0;
}