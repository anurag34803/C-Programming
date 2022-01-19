#include <stdio.h>

int main()
{

    char string[100];
    printf("Enter String\n");
    gets(string);
    
    char word,replace; 
    
    printf("Enter Search Word\n");
    scanf("%c",&word);
    
    printf("Enter Replace Word\n");
    scanf("%*c %c",&replace);
    
    for(int i=0;string[i] != '\0'; i++)
    {
        if(string[i] == word)
        string[i] = replace;
    }
    puts(string);
    return 0;
}