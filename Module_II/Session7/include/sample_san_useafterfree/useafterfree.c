#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv) {
  int * array = (int*) malloc(100 * sizeof(int));
  free(array);
  int number = array[argc];  // BOOM
  printf("After BOOM\n");
  return 0;
}