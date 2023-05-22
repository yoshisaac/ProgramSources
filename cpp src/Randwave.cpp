#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

void spaces(int spaces)
{
	for (int c = 0; c < spaces; c++) { cout << " "; }
}

int main()
{
	srand(time(NULL));

	char Character;
	cout << "Character to print: ";
	cin >> Character;

	if (cin.fail())
	{
		cin.ignore(99999, '\n');
		cin.clear();
		system("cls");
		main();
	}

	while (true)
	{
		int WaveLength = rand()%17;

		for (int i = 0; i < WaveLength; i++)
		{
			spaces(i);
			cout << Character << '\n';
			Sleep(45);
		}

		for (int x = WaveLength; x > 0; x--)
		{
			spaces(x);
			cout << Character << '\n';
			Sleep(45);
		}
	}

	return 0;
}