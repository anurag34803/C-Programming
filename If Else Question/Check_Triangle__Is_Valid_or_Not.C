#include <stdio.h>

void main()
{
    int a,b,c;
    
    printf("Enter 1st Angle\n");
    scanf("%d",&a);
    
    printf("Enter 2nd Angle\n");
    scanf("%d",&b);
    
    printf("Enter 3rd Angle\n");
    scanf("%d",&c);
    
    if(a+b+c==180)
    printf("Valid Traingle");
    
    
    else 
    printf("In-Valid Traingle");
}
