#include <stdio.h>

int main()
{
   FILE *filePointer;

   filePointer = fopen("data/test.txt", "r");

   printf("The current location of file pointer is %d bytes from the start of the file\n", ftell(filePointer));

   // using fseek(), setting the filePointer's position as 4 offsets
   fseek(filePointer, 4, SEEK_SET);

   printf("The current location of file pointer is %d bytes from the start of the file\n", ftell(filePointer));
    
   fclose(filePointer);

   return 0;
}