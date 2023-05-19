#include<stdio.h>

int loop(int a)
{
    if(a>=1)
    return a*loop(a-1);
    else
    return 1;
}
void main()
{
    int m;
    printf("enter the value ");
    scanf("%d",&m);
    int x=loop(m);
    printf("the output is=%d",x);
}