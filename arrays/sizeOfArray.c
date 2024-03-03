#include <stdio.h>

void modifyArray(int b[], int size);

int main(void) {
  int arr[5] = {0, 2, 4, 6, 8};
  int SIZE = sizeof(arr)/sizeof(arr[1]);
  for (int i = 0; i < SIZE; i++ ) {
    printf("%3d", arr[ i ] );
  }

  printf("\n");
  modifyArray(arr, SIZE);
  for (int i = 0; i < SIZE; i++ ) {
    printf("%3d", arr[ i ] );
  }

  return 0;
}

void modifyArray(int b[], int size) {
  for (int j = 0; j < size; j++) {
    b[j] *= 2;
  }
}
