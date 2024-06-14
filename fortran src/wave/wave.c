#include <stdio.h>
#include <unistd.h>
void prnt_(int* x) {
  for (int i = 0; i < *x; i++) printf(" ");
  return;
}

//mil seconds
void slep_(unsigned int* x) {
  usleep((*x) * 10000);
  return;
}
