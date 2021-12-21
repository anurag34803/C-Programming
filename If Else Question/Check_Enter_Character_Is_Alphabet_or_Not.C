#include <stdio.h>

void main()
{   
    char c;
    
    printf("Enter Character\n");
    scanf("%c",&c);
    

    if(c>='a' && c<='z' || c>='A' && c<='Z')
    printf("Entered Character is Alphabet");
    
    
    else
    printf("Entered Character is Not a Alphabet");
}
