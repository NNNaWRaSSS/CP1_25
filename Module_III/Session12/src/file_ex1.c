#include <stdio.h>

int main(){
    FILE *fp;
    int ch;

    fp = fopen("data/hello1.txt", "w");

    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    printf("Enter data (Ctrl+Z or Ctrl+D to end input):\n");

    while ((ch = getchar()) != EOF) {
        putc(ch, fp);
        fflush(fp); // Ensuring the data is written to the file immediately
    }

    fclose(fp);

    fp = fopen("data/hello.txt", "r");

    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("Contents of hello.txt:\n");

    while ((ch = getc(fp)) != EOF) {
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}


