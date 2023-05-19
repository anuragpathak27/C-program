#include<stdio.h>
int main()
{
    int n,t;
    printf("enter the limit");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("enter the numbers");
        scanf("%d",&a[i]);

    }
    for(int i=0;i<n/2;i++)
    {
        t=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=t;

    }
    for(int i=0;i<n;i++)
    {
        printf("the arrays are a[%d]=%d",i,a[i]);
        printf("\n");
    }
}