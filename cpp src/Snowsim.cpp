#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

using namespace std;

int main()
{

	srand(time(NULL));

	while (true)
	{
		for (int i = 0; i < 999; i++)
		{
			for (int x = 0; x < rand()%100; x++)
			{
				cout << "\t";
			}

			cout << "*\n";

		}

		system("cls");
	}

	return 0;
}