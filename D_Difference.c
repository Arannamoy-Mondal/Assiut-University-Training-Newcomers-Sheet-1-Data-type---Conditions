#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    long long x,y,z,a;
    scanf("%lld %lld %lld %lld",&x,&y,&z,&a);
    printf("Difference = %lld",(x*y)-(z*a));
    return 0;
}