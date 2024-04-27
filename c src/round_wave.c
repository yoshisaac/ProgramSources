#include <stdio.h>
#include <unistd.h>
#include <math.h>
#include <stdlib.h>

int main() {
  double i = 0.0;

  for (;;) {
    for (int h = 0; h < abs(100 * tan(cos(i))); h++) {
      printf(" ");
    }

    printf("*\n");

    i += 0.1;

    usleep(60000);
  }
}
