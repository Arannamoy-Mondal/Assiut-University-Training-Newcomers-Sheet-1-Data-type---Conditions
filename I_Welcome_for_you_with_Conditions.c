#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    long long a,b;
    scanf("%lld %lld",&a,&b);
    if(a>=b)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}