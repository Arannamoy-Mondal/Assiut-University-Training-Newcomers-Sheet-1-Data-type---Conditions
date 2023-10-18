#include<stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
int main()
{
    int a,b,c,max=INT_MIN,min=INT_MAX;
    scanf("%d %d %d",&a,&b,&c);
    if(((a>=b)&&(a>=c)))
    {
      max=a;
    }
    else if ((b>=a)&&(b>=c))
    {
        max=b;
        /* code */
    }
    else if ((c>=a)&&(c>=b))
    {
        /* code */
        max=c;
    }
    if((a<=b)&&(a<=c))
    {
        min=a;
    }
    else if ((b<=a)&&(b<=c))
    {
        /* code */
        min=b;
    }
    else if ((c<=a)&&(c<=b))
    {
        min=c;
        /* code */
    }
    printf("%d %d",min,max);
    
    
    
    return 0;
}