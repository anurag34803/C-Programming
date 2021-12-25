#include <stdio.h>

void main()
{
    int number;
    int i=1;
    
    printf("Enter Number\n");
    scanf("%d",&number);
    
    while(i<=10)
    {
       printf("%d X %d = %d\n",number,i,number*i);
       i++;
    }
}
