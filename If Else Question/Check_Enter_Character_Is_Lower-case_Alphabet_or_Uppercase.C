#include <stdio.h>

void main()
{   
    char c;
    
    printf("Enter Character\n");
    scanf("%c",&c);
    

    if(c>='a' && c<='z')
    printf("Lower Case");
    
    
    else
    printf("Upper Case");
}
