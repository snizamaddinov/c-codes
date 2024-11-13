
#include <stdio.h>

int main(void) {
  char card_name[6];
  char my_name[] = "Kivanc";

  printf("Enter CHANGED another a 2 character long string: ");
  scanf("%5s", card_name);

  printf("You enteredd: %s\n", card_name);

  char c;
  char i = 0;
  while ((c = card_name[i])) {
    printf("%c ", c);
    i++;
  }

  printf("\nName: %s\n", my_name);

  return 0;
}
