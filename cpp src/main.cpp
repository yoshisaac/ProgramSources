#include <windows.h>
#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main()
{
    string s;
    char i;
    i = getch();

    while (i != '\r')
    {
        cout << "*";

        s = s + i;

        i = getch();
    }

    cout << "\n" << s << "\n";
    system("pause");
    return 0;
}