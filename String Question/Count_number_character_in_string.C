#include <stdio.h>

void main()
{
    char string[500];
    int count=0;                                              //count store number of character
    
    printf("Enter String\n");
    gets(string);
    
    for (int i=0;string[i]!='\0';i++)
    {
        if(string[i] ==  ' ' || string[i] ==  '\n' || string[i] ==  '\t')
        continue;
        
        else
        count++;
    }

    printf("There are %d charcter in entered string\n",count);

}