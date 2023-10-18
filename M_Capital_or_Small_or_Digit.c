#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char x;
    scanf("%c",&x);
    if((x>=65)&&(x<=90))
    {
     printf("ALPHA\nIS CAPITAL");
    }
    else if ((x>=48)&&(x<=57))
    {
        /* code */
        printf("IS DIGIT");
    }
    else if ((x>=97)&&(x<=123))
    {
        /* code */
        printf("ALPHA\nIS SMALL");
    }

    
    
    return 0;
}