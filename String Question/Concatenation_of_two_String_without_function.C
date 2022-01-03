#include <stdio.h>

void main()
{
    char str_1[100],str_2[200];
    
    printf("Enter String 1\n");
    gets(str_1);
    
    printf("Enter String 2\n");
    gets(str_2);
    
    int count=0;
    
    for(int i=0;str_1[i]!='\0';i++)
    {
        count++;
    }

    for(int i=0;str_2[i]!='\0';i++,count++)
    {
        str_1[count] = str_2[i];
    }
    
    printf("%s",str_1);
}
