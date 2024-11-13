/***
Fibonacci Sequence in terms of recurrence relation:
F0 = 0 and F1 = 1
then,
Fn = Fn-1 + Fn-2, for n > 1;

For n <= 1:
0, 1
*/

#include <stdio.h>

int main(void) {

  int n; // # of rows to print, to hold value asked from user

  printf("Enter the limit: ");
  scanf("%d", &n);

  if (n <= 1) {
    printf("0\t1");
  }

  for (int i = 0; i < n; i++) {

    int a = 0, b = 1; // initial elements of Fibonacci series
    int current; // current fibonacci number, a and b will be updated through
                 // this variable, like temporary

    printf("%d\t", a);
    printf("%d\t", b);

    for (int j = 0; j < i; j++) {
      current = a + b;
      printf("%d\t", current);

      a = b;
      b = current;
    }

    printf("\n");
  }

  return 0;
}
