#include <stdio.h>

void main()
{
    char string[150];
    index=0;                    // tell index to string
    
    printf("Enter String\n");
    gets(string);

   char new[150];               // store string with remove words
   
    for(int i=0;string[index]!='\0';index++,i++)
    {
        if(string[index]==' ' || string[index]== '\n'  || string[index]== '\t' )
          i--;
        
        else
            new[i] = string[index];
    }
    
    puts(new);
}
