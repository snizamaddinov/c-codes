#include <stdio.h>

int main(void) {
  char letters[5] = {'A', 'B', 'C', 'D', 'E'};

  printf("Char array content: %s \n", letters);

  int i = 0;
  char c;
  while ((c = letters[i])) {
    printf("Char: %c\n", c);
    i++;
  }

  printf("Finished\n\n\n");

  int arr[5];

  printf("Enter 5 integers: ");
  for (int i = 0; i < 5; i++) {
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < 5; i++) {
    printf("a[%d] = %d\n", i, arr[i]);
  }

  return 0;
}
