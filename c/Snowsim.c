#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <time.h>

int main() {
  srand(time(NULL));

  for (;;) {
    for (int x = 0; x < rand()%900; x++) {
      printf(" ");
    }

    printf("*\n");
    usleep(5000);
  }
  return 0;
}
