#include <stdio.h>

void main()
{
    char string[500];
    int count=0;                                              //store number of words
    
    printf("Enter String\n");
    gets(string);
    
    for (int i=0;string[i]!='\0';i++)
    {
        if(string[i]==' ' || string[i]== '\n'  || string[i]== '\t' )
        count++;
    }

    printf("Number of Vowel is %d\n",count);

}
