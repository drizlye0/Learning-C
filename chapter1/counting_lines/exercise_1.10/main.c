#include <stdio.h>

int main() {
  int c;

  while ((c = getchar()) != '\b') {
    if (c == '\t') {
      printf("\\t");
    }
    if (c == '\b') {
      printf("\\b");
    }
    if (c == '\\') {
      printf("\\");
    }
    printf("%c", c);
  }
}
