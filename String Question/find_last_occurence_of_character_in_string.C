#include <stdio.h>

void main()
{
    char string[500];
    char word;
    int index=0;                                              //store index of entered character
    
    printf("Enter String\n");
    gets(string);
    
    printf("Enter Words\n");
    scanf("%c",&word);
    
    for (int i=0;string[i]!='\0';i++)
    {
        if(string[i] == word)
        index=i;
    }

    index++;
    printf("%c last occurence at index %d\n",word,index);

}
