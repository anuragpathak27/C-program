#include<stdio.h>
int main()
{
    int n,m=0,e=0;
    printf("enter no elements");
    scanf("%d",&n);
    int a[n],b[e],c[m];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            b[e]=a[i];
            printf("the even number is b[%d] %d",e,b[e]);
            e++;

        }
        printf("\n");
    }
        for(int i=0;i<n;i++)
        {
        if(a[i]%2!=0)
        {
        c[m]=a[i];
        printf("the odd number is c[%d] %d",m,c[m]);
        m++;
        }
        printf("\n");
    }
    
    return 0;
}
