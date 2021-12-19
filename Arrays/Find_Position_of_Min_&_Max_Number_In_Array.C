#include <stdio.h>

void main()
{
    int size;                         // size variable store length of array which is enter by user
    int min=0,max=0;                 // store position or index of minimum & Maximum number
    
    printf("Enter Size Of Array\n");
    scanf("%d",&size);
    
    int array[size];                 // array defined

    for(int i=0; i<size; i++)       // inserting values in array
    {
        printf("Enter %d Value\n" ,i+1);
        scanf("%d",&array[i]);
        
            if(array[min]>array[i])
              min = i;
        
            else if(array[max]<array[i])
             max = i;
    }

    printf("Minimum Position Is %d\n",min+1);
    printf("Maximum Position Is %d\n",max+1);
    
}