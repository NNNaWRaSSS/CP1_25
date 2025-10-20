#include <stdio.h>
int main()
{
   // declaring a file pointer
   FILE *filePointer;

   // opening the file in both read and write mode using w+
   filePointer = fopen("data/test.txt", "r+");

   // clearing the file content, and writing the following string into it
   fputs("Hi my name is Suzan", filePointer);

   // using fseek(), setting the filePointer's position as 8 offsets
   fseek(filePointer, 8, SEEK_SET);

   // clearing the file content starting from the 8th character as specified //above, and writing the following string into it
   fputs("Writing second line into the file", filePointer);

   // closig the file
   fclose(filePointer);

   return 0;
}