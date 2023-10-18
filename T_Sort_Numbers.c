#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int a,b,c,n1,n2,n3;
    scanf("%d %d %d",&a,&b,&c);
    if((a>=b)&&(a>=c))
    {
        n3=a;
    }
    else if ((b>=a)&&(b>=c))
    {
        n3=b;
        /* code */
    }
    else if ((c>=a)&&(c>=b))
    {
        /* code */
        n3=c;
    }
    if ((a<=b)&&(a<=c))
    {
        /* code */
        n1=a;
    }
    else if ((b<=a)&&(b<=c))
    {
        /* code */
        n1=b;
    }
    else if ((c<=a)&&(c<=b))
    {
        n1=c;
        /* code */
    }
    if((n1==c||n1==b)&&(n3==c||n3==b))
    {
      n2=a;
    }
    else if ((n1==c||n1==a)&&(n3==c||n3==a))
    {
        /* code */
        n2=b;
    }
    else if ((n1==a||n1==b)&&(n3==a||n3==b))
    {
        /* code */
        n2=c;
    }
    printf("%d\n%d\n%d\n\n%d\n%d\n%d",n1,n2,n3,a,b,c);
    
    
    
    
    
    
    
    return 0;
}