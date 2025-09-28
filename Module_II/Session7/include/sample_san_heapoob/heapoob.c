#include <stdlib.h>

int main(int argc, char **argv) {
  int * array = (int*) malloc(100 * sizeof(int));
  array[0] = 0;
  int res = array[argc + 100];
  free(array);
  return 0;
}