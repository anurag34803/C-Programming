#include <stdio.h>

int main()
{
    int number;
    int sum = 0;
    
    printf("Enter Number\n");
    scanf("%d",&number);
    
    int square = number*number;
    
    while(square>0)
    {
        sum=sum+square%10;
        square = square/10;
    }
    
    if(sum==number)
    printf("Number is Neon");
    
    else
    printf("Number is not Neon");

    return 0;
}
