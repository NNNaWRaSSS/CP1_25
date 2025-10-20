#include <stdio.h>
#include <stdlib.h>   // for exit() function

int main()
{
    char c[100];
    FILE * fptr;

    if ((fptr = fopen("data/filetoread.txt", "r")) == NULL)
    {
        printf("Error! opening file. Please make sure 'studytonight.txt' exists in the current directory.\n");
        exit(1);         
    }

    fscanf(fptr,"%s", c);

    printf("Data from the file:\n %s", c);
    fclose(fptr);
    
    return 0;
}
