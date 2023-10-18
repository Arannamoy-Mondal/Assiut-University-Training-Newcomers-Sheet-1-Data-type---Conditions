#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char a[1000],b[1000],c[1000],d[1000];
    scanf("%s %s",a,b);
    scanf("%s %s",c,d);
    if(b==d)
    {
        printf("ARE Brothers");
    }
    else
    {
        printf("NOT");
    }
    


    return 0;
}