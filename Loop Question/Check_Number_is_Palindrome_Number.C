#include <stdio.h>
#include <math.h>

void main()
{
    int number;
    int reverse=0;
    
    printf("Enter Number\n");
    scanf("%d",&number);
    
    int original = number;
    
    while(number>0)
    {
        reverse = (reverse*10) + (number%10);
        number=number/10;
    }
    
    if(original==reverse)
    printf("Number is Palindrome");
    
    else
    printf("Number is Not-Palindrome");

}
