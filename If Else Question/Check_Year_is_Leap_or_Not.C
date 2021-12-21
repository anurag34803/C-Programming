#include <stdio.h>

void main()
{   
    int number;
    
    printf("Enter Year\n");
    scanf("%d",&number);
    
    if(number%4==0)
    printf("%d is Leap Year",number);
    
    
    else
    printf("%d is not a Leap Year",number);
}
