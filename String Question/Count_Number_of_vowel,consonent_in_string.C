#include <stdio.h>

void main()
{
    char string[100];
    int vowel,consonent;
    
    vowel=consonent=0;
    
    printf("Enter String\n");
    gets(string);
    
    for (int i=0;string[i]!='\0';i++)
    {
        if(string[i]=='a' || string[i]=='e' || string[i]=='i' || string[i]=='o' || string[i]=='u' || string[i]=='A' || string[i]=='E' || string[i]=='I' || string[i]=='O' || string[i]=='U')
        vowel++;
        
        else
        consonent++;
    }

    printf("Number of Vowel is %d\n",vowel);
    printf("Number of Consonent is %d\n",consonent);

}
