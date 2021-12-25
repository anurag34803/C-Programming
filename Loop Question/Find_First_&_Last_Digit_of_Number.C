#include <stdio.h>
#include <math.h>

void main()
{
    int number;
    
    printf("Enter Number\n");
    scanf("%d",&number);
    
    printf("Last Digit = %d\n",number%10);
    
    while(number>=10)
    {
        number=number/10;
    }
    
    printf("First Digits %d",number%10);

}
