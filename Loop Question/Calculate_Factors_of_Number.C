#include <stdio.h>
void main()
{
    int number;
    
    printf("Enter Number\n");
    scanf("%d",&number);
    
    printf("Factors of %d is -: \n",number);
    
    for(int i=1;i<=number;i++)
    {
        if(number%i==0)
        {printf("%d = %d X %d\n",number,i,number/i); }
    }
}
