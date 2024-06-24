#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void prntSpaces(int NumberOfCharacters, char Character[]) {
  for (int c = 0; c < NumberOfCharacters; c++) { printf(Character); } //prints what ever you want the number of times you specify
}

int main() {
  srand(time(NULL));

  int WaveLengthBack = 0; //lets start from 0 because why not
  int WaveLengthForward = rand()%17; // pick a random number

  for (;;) {	
      for (int spaces = WaveLengthBack; spaces < WaveLengthForward; spaces++)
	{ prntSpaces(spaces, " "); printf("*\n"); usleep(90000); }

      WaveLengthBack = rand()%17; //pick a new number
      while (!(WaveLengthBack < WaveLengthForward)) // Check for if the random number we generated is valid for the forloop
	{ WaveLengthBack = rand()%17; }

      for (int spaces = WaveLengthForward; spaces > WaveLengthBack; spaces--)
	{ prntSpaces(spaces, " "); printf("*\n"); usleep(90000); }

      WaveLengthForward = rand()%17; //pick a new number
      while (!(WaveLengthBack < WaveLengthForward)) // Check for if the random number we generated is valid for the forloop
	{ WaveLengthForward = rand()%17; }
    }
  
  return 0;
}
