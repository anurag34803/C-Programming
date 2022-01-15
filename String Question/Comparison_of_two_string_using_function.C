#include <stdio.h>

void main()
{
    char str1[50],str2[50];

    printf("Enter First String\n");
    gets(str1);
    
    printf("Enter Second String\n");
    gets(str2);

    int result = strcmp(str1,str2);                                          // return 0 if string are equal
    
    if(result == 0)
    printf("Both String is Equal");
    
    else if(result==1)
    printf("First String is Greater");
    
    else
    printf("Second String is Greater");
}
