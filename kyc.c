#include<stdio.h>
int main()
{
    int c;
    scanf("%c",&c);
    if( (c>='a' && c<='z') || (c>='A' && c<='Z'))
    {
        printf("alphabet");
    }
    else
    {
        printf("not alphabet");
    }
}
