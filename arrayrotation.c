#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the limit: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("enter the nnumbers: ");
        scanf("%d",&a[i]);
    }
    int t=a[0];
    for( i=0;i<(n-1);i++)
    {
        a[i]=a[i+1];
        
    }
    a[n-1]=t;
    for(i=0;i<n;i++)
    {
        printf("the value of a[%d]=%d",i,a[i]);
        printf("\n");
    }
}