#include <iostream>
#include <thread>
#include <chrono>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

using namespace std;

char randChar();

int main()
{
	string Input;
	char BlackListedChar = randChar();

	bool inputValid;

	cout << "Input: ";
	cin >> Input;

	for (int i = 0; i < Input.length(); i++)
	{
		char Input2 = Input[i];
		inputValid = true;

		if (std::tolower(Input2) == BlackListedChar)
			inputValid = false;

		if (inputValid)
			cout << Input2;
	}
	
	cout << '\n';
	system("pause");

	return 0;
}

char randChar()
{
	char x;

	srand(time(NULL));

	int y = rand()%25;

	if (y == 0) { x = 'a'; }
	if (y == 1) { x = 'b'; }
	if (y == 2) { x = 'c'; }
	if (y == 3) { x = 'd'; }
	if (y == 4) { x = 'e'; }
	if (y == 5) { x = 'f'; }
	if (y == 6) { x = 'g'; }
	if (y == 7) { x = 'h'; }
	if (y == 8) { x = 'i'; }
	if (y == 9) { x = 'j'; }
	if (y == 10) { x = 'k'; }
	if (y == 11) { x = 'l'; }
	if (y == 12) { x = 'm'; }
	if (y == 13) { x = 'n'; }
	if (y == 14) { x = 'o'; }
	if (y == 15) { x = 'p'; }
	if (y == 16) { x = 'q'; }
	if (y == 17) { x = 'r'; }
	if (y == 18) { x = 's'; }
	if (y == 19) { x = 't'; }
	if (y == 20) { x = 'u'; }
	if (y == 21) { x = 'v'; }
	if (y == 22) { x = 'w'; }
	if (y == 23) { x = 'x'; }
	if (y == 24) { x = 'y'; }
	if (y == 25) { x = 'z'; }

	return x;
}