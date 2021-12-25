#include <stdio.h>
void main()
{
    int number;
    int i=0;
    int sum_odd=0,sum_even=0;                                      // sum_odd calculate sum of odd number
    
    printf("Enter Number\n");
    scanf("%d",&number);
    
    while(i<number)
    {
        i++;
        
        if(i%2==0)
        sum_even = sum_even+i;
        
        else
        sum_odd = sum_odd+i;
        
    }
    printf("Sum od Even Number is %d\n",sum_even);
    printf("Sum od Odd Number is %d",sum_odd);
}
