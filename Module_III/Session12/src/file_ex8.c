#include <stdio.h>
#include <string.h>

int main(){

const char * mytext = "The quick brown fox jumps over the lazy dog";
char mytext1[100];  

FILE *bfp= fopen("data/testbinary.bin", "wb");   
if (bfp) 
{     
    fwrite(mytext, sizeof(char), strlen(mytext), bfp);     
    fclose(bfp);   
}

FILE *bfp1= fopen("data/testbinary.bin", "rb");   
if (bfp1) 
{     
    fread(mytext1, sizeof(char), sizeof(mytext1)-1, bfp1);     
    mytext1[sizeof(mytext1)-1] = '\0'; // Ensure null-termination
    fclose(bfp1);   
}
printf("This is the text: %s", mytext1);
return 0;

}


