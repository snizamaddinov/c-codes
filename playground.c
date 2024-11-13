#include <stdio.h>

int main(void) {
  char coffee[15];

  printf("Enter crappuccino please??? ");
  scanf("%s", coffee);

  char tmp[15];
  char c;
  int i = 0;

  while ((c = coffee[i])) {
    tmp[i] = c;

    i++;
  };

  tmp[i] = '\0';
  tmp[5] = '\0'; // NULL value

  printf("\n\nOhh shoot, you entered %s\n", tmp);

  printf("\n\nHahaha, I am joking, here is what you actually entered: %s\n\n",
         coffee);

  char constant_string[] = {'a', 'b'};
  printf("\n\nThere is an example of string: %s\n", constant_string);

  constant_string[1] = 'A';
  printf("\n\nThere is an example of string2 : %s\n", constant_string);

  return 0;
}
