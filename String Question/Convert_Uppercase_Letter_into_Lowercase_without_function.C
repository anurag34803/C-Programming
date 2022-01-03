#include <stdio.h>

void main()
{
    char string[100];
    
    printf("Enter String\n");
    gets(string);
    
    for(int i=0;string[i]!='\0';i++)
    {
        int ASCII = string[i];
        
        if(string[i]>='A' && string[i]<='Z')
        string[i] = ASCII+32; 
    }
    
    
    puts(string);
}
