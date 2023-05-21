#include <iostream>
#include <windows.h>

using namespace std;

void spaces(int spaces)
{
	for (int c = 0; c < spaces; c++) { cout << " "; }
}

int main()
{
	int WaveLength;
	cout << "Length of Wave: ";
	cin >> WaveLength;

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

	system("CLS");

	while (true)
	{
		for (int i = 0; i < WaveLength; i++)
		{
			spaces(i);
			cout << Character << '\n';
			Sleep(WaitTime);
		}

		for (int x = WaveLength; x > 0; x--)
		{
			spaces(x);
			cout << Character << '\n';
			Sleep(WaitTime);
		}
	}

	return 0;
}