#include <stdio.h>

void main()
{
    int number,power,answer=1;
    
    printf("Enter Number\n");
    scanf("%d",&number);
    
    printf("Enter Power\n");
    scanf("%d",&power);
    
    for (int i=0;i<power;i++)
    {
        answer = answer*number;
    }
    
    printf("%d^%d is %d",number,power,answer);

}
