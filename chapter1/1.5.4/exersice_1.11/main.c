#include <stdio.h>

int main() {
  int c, newWord, state;
  newWord = 0;

  while ((c = getchar()) != '\n') {
    if (c == ' ' || c == '\n' || c == '\r') {
      printf("\n");
      c = 0;
    }
    printf("%c", c);
  }
  printf("\n");
}
