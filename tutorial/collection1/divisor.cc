#include <iostream>

int main() {
  unsigned int a, b;

  std::cin >> a >> b;

  unsigned int r = 1;
  while (r) {
    r = a % b;
    a = b;
    b = r;
  }

  std::cout << a << std::endl;

  return 0;
}