#include <stdio.h>

void main()
{
    int first,second;
    
    printf("Enter First Number\n");
    scanf("%d",&first);
    
    printf("Enter Second Number\n");
    scanf("%d",&second);

    if(first>second)
    printf("First Number is Greater");
    
    else
    printf("Second Number is Greater");
}
