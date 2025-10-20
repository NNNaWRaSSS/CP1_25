#include <stdio.h>

int main()
{
   // declaring a file pointer
   FILE *filePointer;

   // opening the file in read mode
   filePointer = fopen("data/test.txt", "r");

   // using fseek(), setting the filePointer's position as 0 offsets
   fseek(filePointer, 0, SEEK_END);

   // using ftell(), printing the filePointer's current position to //determine its size from the start of the file
   printf("The size of the specified file is %ld bytes\n", ftell(filePointer));
    
    // closing the file
   fclose(filePointer);

   return 0;
}
