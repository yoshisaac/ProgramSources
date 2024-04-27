#include <stdio.h>
#include <unistd.h>

void prntSpaces(int NumberOfCharacters, char Character[]) {
  for (int c = 0; c < NumberOfCharacters; c++) {  printf(Character); } //prints what ever you want the number of times you specify
}

int main(void) {
  
  for (;;) {
    for (int i = 0; i < 15; i++) {
      prntSpaces(i, " ");
      printf("*\n");
      usleep(90000);
    }

    for (int i = 15; i > 0; i--) {
      prntSpaces(i, " ");
      printf("*\n");
      usleep(90000);
    }
  }

  return 0;
}

