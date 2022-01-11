#include <stdio.h>

void main()
{
    char string[500];
    char word;
    int count=0;                                              //count store number of times entered word occurence
    
    printf("Enter String\n");
    gets(string);
    
    printf("Enter Charcter\n");
    scanf("%c",&word);
    
    for (int i=0;string[i]!='\0';i++)
    {
        if(string[i] == word)
        count++;
    }

    printf("%c occur %d times\n",word,count);

}