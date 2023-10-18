#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    long long n;
    scanf("%lld",&n);
    long long mn,da,ye,we;
    ye=floor(n/365);
    mn=floor((n%365)/30);
    da=floor((n%365)%30);
    printf("%lld years\n%lld months\n%lld days",ye,mn,da);
    
    return 0;
}