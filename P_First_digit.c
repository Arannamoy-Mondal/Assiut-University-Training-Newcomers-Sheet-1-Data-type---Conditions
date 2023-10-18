#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int n,n1,res1,nd,res;
    scanf("%d",&n);
    n1=n;
    nd=floor(log10(n))+1;
    res=(pow(10,nd-1));
    res1=n1/res;
    // printf("%d %d\n",res1,nd);
    if((res1%2)==0)
      printf("EVEN");
    else
      printf("ODD");
    return 0;
}