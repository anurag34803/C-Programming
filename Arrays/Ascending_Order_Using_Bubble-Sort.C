#include <stdio.h>

void main()
{
    int size,temp;                               // temp variable is used in exchange values
    
    printf("Enter Number of Element\n");
    scanf("%d",&size);
    
    int array [size];                            //  Array Defined here
    
    for(int i=0;i<size;i++)
   {
       printf("Enter %d Element\n",i+1);
       scanf("%d",&array[i]);
   }
   
   for(int i=0;i<size-1;i++)
   {
       for(int j=0;j<size-1;j++)
       {
           if(array[j] > array[j+1])
           {
               temp = array[j];
               array[j] = array[j+1] ;
               array[j+1] = temp ;
           }
           
       }
   }
   
   for(int i=0;i<size;i++)
   {
       printf("%d, ",array[i]);
   }
   
}
