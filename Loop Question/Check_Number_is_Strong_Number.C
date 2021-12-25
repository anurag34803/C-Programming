#include <stdio.h>

void main()
{
    int number;
    int answer=1;                           //calculate factorial of particular number
    int sum=0;                                              //calculate sum of factorial
    int condition=1;
    
    printf("Enter Number\n");
    scanf("%d",&number);
    
    int original=number;                    // store number
    
    while(condition)
    {
        if(number>0)
        {
            int pass = number%10;           // pass particular number in loop
            number=number/10;
            
            while(pass>1)
            {
                answer=answer*pass;
                pass--;
            }
            sum=sum+answer;
            answer=1;
        }
    
       else
       condition=0;
    }
    
    if(sum==original)
    
        printf("Enter Number Is Robinson");
    
    else 
    printf("Enter Number Is Not Robinson");

}
