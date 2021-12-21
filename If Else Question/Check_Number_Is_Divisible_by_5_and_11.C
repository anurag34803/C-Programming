#include <stdio.h>

void main()
{   
    int number;
    
    printf("Enter Number\n");
    scanf("%d",&number);
    
    if(number%5==0 && number%11==0)
    printf("Number is Divisible by 5 and 11");
    
    
    else
    printf("Number is Not Divisible by 5 and 11");
}
