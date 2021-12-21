#include <stdio.h>

void main()
{
    int first,second,third;
    
    printf("Enter First Number\n");
    scanf("%d",&first);
    
    printf("Enter Second Number\n");
    scanf("%d",&second);

    printf("Enter Third Number\n");
    scanf("%d",&third);
    
    if(first>second)
       {
           if(first>third)
           printf("First Number is Greater");
           
           else 
           printf("Third Number is Greater");
       }
    
    else
    {
           if(second>third)
           printf("Second Number is Greater");
           
           else 
           printf("Third Number is Greater");
       }
}
