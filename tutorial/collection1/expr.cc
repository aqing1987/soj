#include <cstdio>

int main() {
  double a, b, result;
  char op;

  scanf("%lf %c %lf", &a, &op, &b);

  switch (op) {
    case '+':
      result = a + b;
      break;

    case '-':
      result = a - b;
      break;

    default:
      result = a * b;
      break;

  }

  printf("%.0lf\n", result);

  return 0;
}