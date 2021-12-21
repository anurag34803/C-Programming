#include <stdio.h>

void main()
{
    int Physics, Chemistry, Biology, Mathematics, Computer;
    
    printf("Enter Physics Marks\n");
    scanf("%d",&Physics);
    
    printf("Enter Chemistry Marks\n");
    scanf("%d",&Chemistry);
    
    printf("Enter Biology Marks\n");
    scanf("%d",&Biology);
    
    printf("Enter Mathematics Marks\n");
    scanf("%d",&Mathematics);
    
    printf("Enter Computer Marks\n");
    scanf("%d",&Computer);
    
    float percentage = (Computer + Mathematics + Biology + Chemistry  + Physics)*100/500;
    
    if(percentage >= 90)
    printf("Grade A");
    
    else if(percentage >= 80)
    printf("Grade B");
    
    else if(percentage >= 70)
    printf("Grade C");
    
    else if(percentage >= 60)
    printf("Grade D");
    
    else if(percentage >= 50)
    printf("Grade E");
    
    else if(percentage >= 40)
    printf("Grade F");
    
    else
    printf("Grade F");
    
}
