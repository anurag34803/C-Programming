#include <stdio.h>
void main()

{
    int number;
    int condition = 0;
    
    printf("Enter Number\n");
    scanf("%d",&number);
    
    for(int i=2;i<number;i++)
    {
        if(number%i==0)
        {
            condition = 1;
            break;
        }
    }


if(condition)
printf("%d is not a Prime-Number",number);

else
printf("%d is a Prime-Number",number);

}
