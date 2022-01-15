#include <stdio.h>
#include <string.h>

void main()
{
    char string[100];
    int result=1;
    
    printf("Enter String\n");
    gets(string);
    
    for(int i=0;string[i]!='\0';i++)
    {
        int ASCII = string[i];
        
        if(string[i]>='a' && string[i]<='z')
        string[i] = ASCII-32; 
    }
    
    int size = strlen(string);
    size--;
    
    for(int i=0;i<=(size/2);i++,size--)
    {
        if(string[i] == string[size])
        continue;
        
        else
      {  result=0;
        break;     }
        
    }
    
    if(result)
    printf("String is Palindrome\n");
    
    else
    printf("String is not Palindrome\n");
}