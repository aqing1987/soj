#include <cstdio>
#include <cstring>
#include <cctype>

#define MAX_LEN 4096

int main() {
  char text[MAX_LEN + 1];
  fgets(text, MAX_LEN, stdin);

  int cnt[26];
  memset(cnt, 0, sizeof(cnt));

  int len = strlen(text);
  for (int i = 0; i < len; i++) {
    char c = text[i];
    if (isalpha(c)) {
      cnt[toupper(c) - 'A']++;
    }
  }

  for (int i = 0; i < 26; i++) {
    if (cnt[i]) {
      printf("%c: %d\n", i + 'A', cnt[i]);
    }
  }

  return 0;
}