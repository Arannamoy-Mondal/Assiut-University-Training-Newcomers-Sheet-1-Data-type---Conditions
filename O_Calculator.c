#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char s;
    long long a,b;
    scanf("%lld %c %lld",&a,&s,&b);
    switch (s)
    {
    case '+':
        /* code */
        printf("%lld",a+b);
        break;
    case '-':
        printf("%lld",a-b);
        break;
    case '*':
       printf("%lld",a*b);
       break;
    case '/':
       printf("%lld",a/b);
       break;
    default:
        break;
    }
    
    
    
    return 0;
}