#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    float x,y;
    scanf("%f %f",&x,&y);
    if((x>0)&&(y>0))
    {
        printf("Q1");
    }
    else if ((x>0)&&(y<0))
    {
        printf("Q4");
        /* code */
    }
    else if ((x<0)&&(y<0))
    {
        /* code */
        printf("Q3");
    }
    else if ((x<0)&&(y>0))
    {
        printf("Q2");
        /* code */
    }
    else if ((x==0)&& (y!=0))
    {
        printf("Eixo Y");
        /* code */
    }
    else if ((y==0) && (x!=0))
    {
        printf("Eixo X");
        /* code */
    }
    else if (x==0 && y==0)
    {
        printf("Origem");
        /* code */
    }
    
    
    
    
    
    return 0;
}