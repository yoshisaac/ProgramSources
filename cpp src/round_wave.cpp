#include <iostream>
#include <cmath>
#include <thread>

int main() {
  double i = 0.0;

  while (true) {
    for (int h = 0; h < abs(100 * cos(i)); h++) {
      std::cout << " ";
    }

    std::cout << "*\n";

    i += 0.1;

    std::this_thread::sleep_for(std::chrono::milliseconds(65));
  }
}
