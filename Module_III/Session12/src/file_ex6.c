#include <stdio.h>
int main() {
    FILE *fp1, *fp2;
    char ch;
    int pos;
    if ((fp1 = fopen("data/File_1.txt", "r")) == NULL) {
        printf("\nFile cannot be opened.");
        return 1; // Return an error code to indicate failure
    } else {
        printf("\nFile opened for copy...\n");
    }
 
    fp2 = fopen("data/File_2.txt", "w");
    fseek(fp1, 0L, SEEK_END);// File pointer at the end of the file
    pos = ftell(fp1);
    fseek(fp1, 0L, SEEK_SET);
    while (pos--) {
        ch = fgetc(fp1); // Copying the file character by character
        fputc(ch, fp2);
    }
    fclose(fp1); // Close the first file
    fclose(fp2); // Close the second file
return 0; // Return 0 to indicate success
}
