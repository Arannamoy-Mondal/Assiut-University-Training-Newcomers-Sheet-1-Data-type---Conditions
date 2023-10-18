#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if((ch>='A')&&(ch<='Z'))
    {
        printf("%c",tolower(ch));
    }
    else
    {
        printf("%c",toupper(ch));
    }

  
    return 0;
}