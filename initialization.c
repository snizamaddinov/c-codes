#include <stdio.h>

int main(void) {
  char arr[] = {1, 2, 4};
  char arr2[5] = {5, 4};
  char arr3[10] = {[0] = 1, [2] = 1, [4] = 1, [6] = 1, [8] = 1};
  char arr4[20];

  printf("First array: \n");
  for (int i = 0; i < 3; i++) {
    printf("a[%d] => %d\n", i, arr[i]);
  }

  printf("Second array: \n");
  for (int i = 0; i < 5; i++) {
    printf("a[%d] => %d\n", i, arr2[i]);
  }

  printf("Third array: \n");
  for (int i = 0; i < 10; i++) {
    printf("a[%d] => %d\n", i, arr3[i]);
  }

  printf("Fourth array: \n");
  for (int i = 0; i < 20; i++) {
    printf("a[%d] => %d\n", i, arr4[i]);
  }

  return 0;
}
