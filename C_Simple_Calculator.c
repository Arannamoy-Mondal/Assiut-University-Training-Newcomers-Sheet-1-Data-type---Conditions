#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    long long x,y;
    scanf("%lld %lld",&x,&y);
    printf("%lld + %lld = %lld\n%lld * %lld = %lld\n%lld - %lld = %lld",x,y,x+y,x,y,x*y,x,y,x-y);
    return 0;
}