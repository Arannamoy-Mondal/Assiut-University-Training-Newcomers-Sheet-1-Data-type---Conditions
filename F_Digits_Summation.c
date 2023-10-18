#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    long long x,y;
    scanf("%lld %lld",&x,&y);
    printf("%lld",(x%10)+(y%10));
    return 0;
}