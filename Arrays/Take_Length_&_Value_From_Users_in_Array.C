#include <stdio.h>

void main()
{
    int size;
    printf("Enter Size Of Array\n");
    scanf("%d",&size);
    
    int array[size];

    for(int i=0; i<size; i++)
    {
        printf("Enter %d Value\n" ,i+1);
        scanf("%d",&array[i]);
    }

    for(int i=0; i<size; i++)                          // print values of arrays
    {
        printf("%d " ,array[i]);
    }

}
