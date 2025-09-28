#include <stdio.h>
#include <stdlib.h>

void leaker(void) {
   void * buffer = malloc(256);
   const char msg[100] = "hi leak\n";
   printf("%s",msg);
}

int main (){
    printf("hello world\n");
    leaker();
    return 0;
}
