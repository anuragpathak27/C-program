#include<stdio.h>
int deletionarray()
{
    int n;
    printf("enter the limit= ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("enter the digit=");
        scanf("%d",&a[i]);
    }
    int del;
    printf("enter the element you want to delete=" );
    scanf("%d",&del);
    for(int i=0;i<n;i++)
    {
        if(a[i]==del)
        {
            for(int j=i;j<=(n-1);j++)
            {
                a[j]=a[j+1];

            }
        }
    }
    for(int i=0;i<(n-1);i++)
    {
    printf("the numbers are a[%d]=%d",i,a[i]);
    printf("\n");
    }
    return 0;
}
