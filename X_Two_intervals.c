#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    long long l1,r1,l2,r2;
    scanf("%lld %lld %lld %lld",&l1,&r1,&l2,&r2);
    if(((l2>r1)&&(r2>r1))||((l2<l1)&&(r2<l1)))
      printf("-1");
    else
    {
        int x,y;
        if(l1>l2)
         {
            printf("%d ",l1);
         }
         else
         {
            printf("%d ",l2);
         }
         if(r1<r2)
         {
            printf("%d",r1);
         }
         else
         {
            printf("%d",r2);
         }

    }
    return 0;
}