#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    float a,b;
    scanf("%f %f",&a,&b);
    float x=floor(a/b),y=ceil(a/b),z=round(a/b);
    printf("floor %.0f / %.0f = %.0f\n",a,b,x);
    printf("ceil %.0f / %.0f = %.0f\n",a,b,y);
    printf("round %.0f / %.0f = %.0f",a,b,z);
    return 0;
}