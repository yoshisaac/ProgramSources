#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
    string x;

    for (int i = 100; i > 0; i--)
    {
        x = to_string(i);

        if (i%3 == 0 && i%5 == 0)
        {
            x = "FizzBuzz";
        }
        else if (i % 3 == 0)
        {
            x = "Fizz";
        }
        else if (i % 5 == 0)
        {
            x = "Buzz";
        }

        cout << i << " - " << x << '\n';
    }

    system("pause");
    return 0;
}
