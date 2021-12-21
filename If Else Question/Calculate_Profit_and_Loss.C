#include <stdio.h>

void main()
{
    int cp,sp;
    
    printf("Enter Cost Price\n");
    scanf("%d",&cp);
    
    printf("Enter Selling Price\n");
    scanf("%d",&sp);
    
    
    if(cp>sp)
    printf("Loss of Amount %d",cp-sp);
    
    else 
    printf("Profit of Amount %d",sp-cp);
}
