#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    long long a,b,c,e;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&e);
    a%=100;
    b%=100;
    c%=100;
    e%=100;
    long long mul=a*b*c*e;
    if(mul%100<=9)
    {
        printf("0");
        
    }
    printf("%lld",mul%100);
    

    return 0;
}