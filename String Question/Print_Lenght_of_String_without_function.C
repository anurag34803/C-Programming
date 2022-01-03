#include <stdio.h>

void main()
{
    char string[100];
    int count=0;
    printf("Enter String\n");
    gets(string);
    
    for(int i=0;string[i]!='\0';i++)
    {
      count++;  
    }

    printf("Length of String is %d ",count);
}
