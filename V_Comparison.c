#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int a,b;
    char s;
    scanf("%d %c %d",&a,&s,&b);
    switch (s)
    {
    case '>':
        if(a>b)
        {
            printf("Right");
        }
        else
        {
            printf("Wrong");
        }
        break;
    case '<':
       if(a<b)
       {
        printf("Right");
       }
       else
       {
        printf("Wrong");
       }
       break;
    case '=':
       if(a==b)
       {
        printf("Right");
       }
       else
       {
        printf("Wrong");
       }
       break;
    default:
        break;
    }
    return 0;
}