#include <stdio.h>

void main()
{
    int number;
    
    printf("Enter Number\n");
    scanf("%d",&number);
    
    if(number==1)
    printf("%d is a Prime-Number",number);
    
    for(int i=2;i<=number;i++)
    {
        if(number/i==1 && number%i==0)
        printf("%d is a Prime-Number",number);
        
        else if(number/i!=1 && number%i==0)
        {
            printf("%d Number is Not a Prime-Number",number);
            break;
        }
    }
    
    

}
