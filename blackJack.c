/***
BlackJack oyunu:

As -> 14
Papaz -> 13
Dam -> 12
Vale -> 11
10, 9, 8, 7, 6, 5, 4, 3, 2, 1
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char cards[3];
  int value = 0;

  for (int i = 0; i < 2; i++) {
    printf("Enter the card in your hand: ");
    scanf("%2s", cards);
    if (cards[0] == 'A') {
      value += 14;
    } else if ('P' == cards[0]) {
      value += 13;
    } else if ('D' == cards[0]) {
      value += 12;
    } else if ('V' == cards[0]) {
      value += 11;
    } else {
      value = atoi(cards);
    }
  }

  printf("\nValue of your cards %s => %d\n", cards, value);

  return 0;
}
