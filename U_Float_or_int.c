#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    float n;
    scanf("%f",&n);
    int a=floor(n);
    float b=n-a;
    if(b==0)
    {
        printf("int %i",a);
    }
    else
    {
        printf("float %i %.3f",a,b);
    }
    return 0;
}