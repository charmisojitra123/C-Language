#include <stdio.h>
int main()
{
    FILE *ptr;
    char string[50]="Hello Everyone";

    // ptr=fopen("mytext.txt","w");
    // fprintf(ptr,"%s",string);

    // ptr=fopen("mytext.txt","a");
    // fprintf(ptr,"%s",string);

    ptr=fopen("mytext.txt","r");
    fscanf(ptr,"%s",string);

    printf("The text is %s\n",string);
}