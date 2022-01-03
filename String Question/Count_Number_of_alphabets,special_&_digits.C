#include <stdio.h>

void main()
{
    char string[100];
    int alphabet,special,number;
    
    alphabet=special=number=0;
    
    printf("Enter String\n");
    gets(string);
    
    for (int i=0;string[i]!='\0';i++)
    {
        if(string[i]>='a' && string[i]<='z' || string[i]>='A' && string[i]<='Z')
        alphabet++;
        
        else if(string[i]>='0' && string[i]<='9')
        number++;
        
        else
        special++;
    }

    printf("Number of Alphabet is %d\n",alphabet);
    printf("Number of Special is %d\n",special);
    printf("Number of Number is %d\n",number);
}
