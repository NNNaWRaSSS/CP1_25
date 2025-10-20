#include <stdio.h>

struct emp
{
    char name[10];
    int age;
};
int main()
{
    struct emp e;
    FILE *p,*q;
    int po;
    p = fopen("data/one.txt", "w+");
    //q = fopen("one.txt", "r");
    for(int i=0;i<3;i++){
        printf("Enter Name and Age:");
        scanf("%s %d", e.name, &e.age);
        //rewind(p);
        fprintf(p,"%s %d\n", e.name, e.age);
    }

    
    
    //rewind(p); // Rewind the file pointer to
    // the beginning
    do
    {   //po=ftell(p);
        char buffer[100];
        char *result = fgets(buffer, sizeof(buffer),p);
        printf("The position is: %d",po);
        //fseek(p,0,po);
        //fscanf(p,"%s %d", e.name, &e.age);
        sscanf(buffer, "%s %d", e.name, &e.age);
        printf("%s %d", e.name, e.age);
        
    }
    while(!feof(p));
    fclose(p);
    return 0;
}
