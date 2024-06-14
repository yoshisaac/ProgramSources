#include <iostream>
#include <stdio.h>
#include <thread>

void prntChars(int NumberOfCharacters, char Character)
{
  for (int c = 0; c <= NumberOfCharacters; c++) { std::cout << Character; } //prints what ever you want the number of times you specify
}

int main() {
  int waveLengthForward = 15;
  int waveLengthBack = 0;
  int waveLineLength = waveLengthForward;

  
  while (true) {
    for (int i = 0; i < waveLengthForward; i++) {
      prntChars(waveLengthBack, ' ');
      printf("*\n");
      std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    prntChars(waveLengthBack, ' ');
    prntChars(waveLineLength, '*');    
    printf("\n");
    std::this_thread::sleep_for(std::chrono::milliseconds(100));

    for (int i = 0; i < waveLengthForward; i++) {
      prntChars(waveLengthBack + waveLengthForward, ' ');
      printf("*\n");
      std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    prntChars(waveLengthBack, ' ');
    prntChars(waveLineLength, '*');
    printf("\n");
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
  }
}
