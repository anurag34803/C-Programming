#include <stdio.h>

void main()
{
    char string[150];
    int count=0,index=0;
    
    printf("Enter String\n");
    gets(string);

    for(int i=0;string[index]!='\0';i++,index++)
    {
        if(string[index]==' ' || string[index]== '\n'  || string[index]== '\t' )
        count++;
        
        else
        string[i-count] = string[index];
    }

    count= index-count;
    index= count;
    
    for(int i=count;string[index]!='\0';i++,index++)               
    {
        string[i] = ' ';
    }
    
    puts(string);
}
