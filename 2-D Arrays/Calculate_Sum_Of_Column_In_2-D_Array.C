#include <stdio.h>

void main()
{
     
    int array[4][3]={ {1,2,3}, {4,5,6}, {7,8,9}, {10,11,12} };
    int sum=0;

    for(int i=0;i<3;i++)
    {
    
      for(int j=0;j<4;j++)
      {
        sum=sum+array[j][i];
       }  
       printf("Sum of %d Column %d\n",i+1,sum);
       sum=0;

    }
}
