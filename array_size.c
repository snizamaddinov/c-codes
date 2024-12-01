#include <stdio.h>

int main() {
  int myNumbers[23] = {10, 25, 50, 75, 100};
  int length = sizeof(myNumbers) / sizeof(myNumbers[0]);

  printf("Enter a character: ");
  char c;
  scanf("%c", &c);
  printf("%d\n", length);

  char str[] = "Hello World!";
  int l = sizeof(str) / sizeof(str[0]);
  printf("string with null character: %s\n", str);
  printf("Length of the string: %d\n", l);
  str[l - 1] = 'y';
  printf("string without null character: %s\n", str);
  scanf("%c", &c);
  return 0;
}