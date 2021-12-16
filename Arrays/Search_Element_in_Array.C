#include <stdio.h>

void main()
{
    int array[8] = {5,10,20,33,6,7,50,99};
    int number;
    int condition=1;  // conditon is 1 this means true
    
    printf("Enter Number: \n");
    scanf("%d",&number);
    
    for(int i=0; i<8; i++)
    {
        if(number==array[i])
        {
        printf("Number is Present at Position %d",i+1);
        condition=0;
        }
    }
    
    if(condition) 
    printf("Number is Not Present");
    
}