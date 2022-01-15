#include <stdio.h>
#include <string.h>

void main()
{
    char str[100];
    int end,start,index;                     // start tell from where to start
    
    printf("Enter String\n");
    gets(str);

    end = strlen(str);
    end--;
    
    start = end;
    
   while(start>0)
    {
        if(str[start]== ' ')
         {
            index = start-1;                      // it store space index which help next time start program from this index
            start++;
            
            while(start<=end)
            {
                printf("%c",str[start]);
                start++;
            }
            start=end=index;
            printf(" ");
         }
      
       else
       start--;
    }
    
    if (start==0)
    {
        while(start<=end)
            {
                printf("%c",str[start]);
                start++;
            }
    }
}

