#include <stdio.h>
#include<math.h>

int main() 
{
    double A,B,C,D;
    scanf("%lf %lf %lf %lf",&A,&B,&C,&D);
    double E=B*log10(A);
    double F=D*log10(C);
    if(E>F)
    {
        printf("YES");
    }
    else 
    {
        printf ("NO");
    }
    return 0;
}