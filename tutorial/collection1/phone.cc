#include <cstdio>

int main() {

  int h1, m1, s1, h2, m2, s2;

  scanf("%d:%d:%d %d:%d:%d", &h1, &m1, &s1, &h2, &m2, &s2);

  int interval = h2*3600 + m2*60 + s2 - (h1*3600 + m1*60 + s1);
  if (interval < 0) {
    interval += 24*3600;
  }

  printf("%d\n", interval);

  return 0;
}