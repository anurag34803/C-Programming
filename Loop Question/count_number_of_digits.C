#include <stdio.h>
#include <math.h>

void main()
{
    int number;
    int sum=0;
    int count=0;                                 // store number of digits enter by user
    
    printf("Enter Number\n");
    scanf("%d",&number);
    
    while(number>0)
    {
        number=number/10;
        count++;
    }
    
    printf("Number of Digits %d",count);

}
