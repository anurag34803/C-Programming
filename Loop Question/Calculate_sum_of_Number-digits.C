#include <stdio.h>

void main()
{
    int number;
    int sum=0;                            //Calculate Sum
    
    printf("Enter Number\n");
    scanf("%d",&number);
    
    while(number>0)
    {
        sum = sum+number%10;
        number = number/10;
    }

    printf("%d",sum);

}
