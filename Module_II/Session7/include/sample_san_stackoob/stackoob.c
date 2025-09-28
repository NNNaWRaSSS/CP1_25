#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
  /*int stack_array [100];
  stack_array[1] = 0;
  return stack_array[argc + 100];*/
    char *payload = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    char buffer[10];
    strcpy(buffer, payload);
    return 0;
}