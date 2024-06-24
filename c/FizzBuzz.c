#include <stdio.h>

int main(void)
{
  for (int i = 100; i > 0; i--) {
    if (i%3 == 0 && i%5 == 0)
      printf("%d - FizzBuzz\n", i);
    else if (i%3 == 0)
      printf("%d - Fizz\n", i);
    else if (i%5 == 0)
      printf("%d - Buzz\n", i);
    else
      printf("%d - %d\n", i, i);
  }
  
  return 0;
}
