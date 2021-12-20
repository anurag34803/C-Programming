#include <stdio.h>

void main()
{
    int row,column;
    
    printf("Enter Row Of Array\n");
    scanf("%d",&row);
    
    printf("Enter Column Of Array\n");
    scanf("%d",&column);
    
    int array[row][column];
    
    for(int i=0;i<row;i++)
    {
    
      for(int j=0;j<column;j++)
      {
        printf("Enter Value of %d row and %d column\n",i+1,j+1);
        scanf("%d",&array[i][j]);
       }  
       
    }

    for(int i=0;i<row;i++)
    {
    
      for(int j=0;j<column;j++)
      {
        printf("%d ",array[i][j]);
       }  
       
       printf("\n");
    }
}
