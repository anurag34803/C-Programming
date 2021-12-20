#include <stdio.h>

void main()
{
    int size;                         // size variable store length of array which is enter by user
    int min,max;
    int second_min,second_max;        // store 2nd greater and smaller number
    
    printf("Enter Size Of Array\n");
    scanf("%d",&size);
    
    int array[size];                 // array defined

    for(int i=0; i<size; i++)       // inserting values in array
    {
        printf("Enter %d Value\n" ,i+1);
        scanf("%d",&array[i]);
        
        if(i==0)
        {
            min = array[0];
            max = min;
            second_min = min;
            second_max = min;
            
        }
        
        else if(min>array[i])
        {
          second_min = min;
          min = array[i];
        }
        
        else if(max<array[i])
        {
          second_max = max;
          max = array[i];
        }
    }

    printf("Second Minimum Is %d\n",second_min);
    printf("Second Maximum Is %d\n",second_max);
    
}