#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int a,b,r;
    char s,e;
    scanf("%d %c %d %c %d ",&a,&s,&b,&e,&r);
    switch (s)
    {
    case '+':
    {
        
        if((a+b)==r)
          printf("Yes");
        else
          printf("%d",a+b);

    }
        break;
    case '-':
       if((a-b)==r)
         printf("Yes");
       else
         printf("%d",a-b);
       break;
    case '*':
        if((a*b)==r)
           printf("Yes");
        else
          printf("%d",a*b);
        break;

    
    default:
        break;
    }
    return 0;
}