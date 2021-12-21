#include <stdio.h>

void main()
{
    int a,b,c;
    
    printf("Enter 1st Side\n");
    scanf("%d",&a);
    
    printf("Enter 2nd Side\n");
    scanf("%d",&b);
    
    printf("Enter 3rd Side\n");
    scanf("%d",&c);
    
    if(a==b && b==c && c==a)
    printf("Equilateral Traingle");
    
    else if(a==b || b==c || c==a)
    printf("Isosceles triangle");
    
    else 
    printf("Scalene Traingle");
}
