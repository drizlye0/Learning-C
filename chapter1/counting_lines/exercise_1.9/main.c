#include <stdio.h>

int main() {
  int c, blankSpace;
  while ((c = getchar()) != '\n') {
    if (c == ' ') {
      c = '\'';
    }
    printf("%c", c);
  }
}
