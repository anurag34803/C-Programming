#include <stdio.h>

void main()
{
    int size;
    printf("Enter Size Of Array\n");
    scanf("%d",&size);
    
    int number;
    int even[size];                                       // Array storing Even Values
    int odd[size];                                       // Array storing Odd Values
    int x=0,y=0;                         // x and y  tell index of even and odd array
    
    
    for(int i=0;i<size; i++)           // Inserting Values in Array
    {
        printf("Enter %d values\n",i+1);
        scanf("%d",&number);
        
                     if(number%2==0)
                     {
                        even[x] = number;
                        x=x+1;
                     }
        
                     else
                    {
                        odd[y] = number;
                        y=y+1;
                    }
    }
    
    printf("Even Value Array Is\n");
    for(int i=0;i<x;i++)
    {   
        printf("%d ",even[i]);
    }
 
 
    printf("\nOdd Value Array Is\n");
    for(int i=0;i<y;i++)
    {   
        printf("%d ",odd[i]);
    }
}
