#include <stdio.h>

void main()
{
    int number;
    
    printf("Enter Month Number\n");
    scanf("%d",&number);
    
    if(number==1 || number==3 ||number==5 || number==7 || number==8 || number==10 || number==12)
    printf("31 Days in Month in Entered Month");
    
    else if (number==2)
    printf("28 Days in Month in Entered Month");
    
    else 
    printf("30 Days in Month in Entered Month");
 
}
