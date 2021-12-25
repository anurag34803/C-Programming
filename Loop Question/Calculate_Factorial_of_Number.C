#include <stdio.h>

void main()
{
    int number;
    int factorial=1;                    
    
    printf("Enter Number\n");
    scanf("%d",&number);
    
    while(number>1)
    {
        factorial = factorial*number;
        number--;
    }
    
    printf("%d",factorial);
}