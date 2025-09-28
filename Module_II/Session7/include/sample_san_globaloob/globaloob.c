#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int global_array[100] = {-1};

int main(int argc, char **argv) {
  int index = (argc + 100) % 100; // Ensure index is within bounds
  return global_array[index];
}