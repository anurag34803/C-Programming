#include <stdio.h>

int main()
{
    int number;
    int i = 1;
    int sum=0;
    
    printf("Enter Number\n");
    scanf("%d",&number);
    
    while(i<=number)
    {
        sum=sum+i;
        i++;
    }
    printf("%d ",sum);
    return 0;
}
