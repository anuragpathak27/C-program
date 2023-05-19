#include<stdio.h>
int main()
{
    int i,n,t;
    printf("enter the limit of the array: ");
    scanf("%d",&n);
    int a[n];
    for( i=0;i<n;i++)
    {
        printf("enter the digits: ");
        scanf("%d",&a[i]);
    }
    int r;
    printf("enter the times of rotation of array: ");
    scanf("%d",&r);
    
    for(int j=1;j<=r;j++)
    {
       t=a[0];
       for(i=0;i<(n-1);i++)
       {
        
        a[i]=a[i+1];
        
       }
       a[n-1]=t;
    }
       for(i=0;i<n;i++)
       {
        printf("the output is a[%d]=%d",i,a[i]);
        printf("\n");
       }
    return 0;

}