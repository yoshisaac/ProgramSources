#include <iostream>
#include <windows.h>

using namespace std;

void prntSpaces(int NumberOfCharacters, char Character)
{
	for (int c = 0; c < NumberOfCharacters; c++) { cout << Character; } //prints what ever you want the number of times you specify
}

int main()
{
	const char space = ' ';

	/* [ Settings ] */
	int WaveLengthForward;
	cout << "Length of Wave forward: ";
	cin >> WaveLengthForward;

	if (cin.fail())
	{
		cin.clear();
		cin.ignore(9999999, '\n');
		system("CLS");
		main();
	}

	cout << '\n';

	int WaveLengthBack;
	cout << "Length of Wave back: ";
	cin >> WaveLengthBack;

	if (WaveLengthBack > WaveLengthForward)
	{
		cout << "\nLength of wave forward has to be larger than the length back\n";
		system("pause");

		system("CLS");
		main();
	}

	if (cin.fail())
	{
		cin.clear();
		cin.ignore(9999999, '\n');
		system("CLS");
		main();
	}

	cout << '\n';

	int WaitTime;
	cout << "Wait per draw in ms: ";
	cin >> WaitTime;

	if (cin.fail())
	{
		cin.clear();
		cin.ignore(9999999, '\n');
		system("CLS");
		main();
	}

	cout << '\n';

	char Character;
	cout << "Character to print: ";
	cin >> Character;

	if (cin.fail())
	{
		cin.clear();
		cin.ignore(9999999, '\n');
		system("CLS");
		main();
	}

	system("CLS"); //Clear screen

	while (true)
	{
		for (int spaces = WaveLengthBack; spaces < WaveLengthForward; spaces++)
		{
			prntSpaces(spaces, space);
			cout << Character << '\n';
			Sleep(WaitTime);
		}

		int b = 0;
		for (int spaces = WaveLengthForward; spaces > WaveLengthBack; spaces--)
		{
			for (int z = 0; z < b; z++)
			{
				cout << "\b\b";
			}
			b++;
			prntSpaces(spaces, space);
			cout << Character << '\n';
			Sleep(WaitTime);
		}
	}

	return 0;
}

