#include<stdio.h>
int main()
{
    int n;
    printf("enter the limit= ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("enter the number= ");
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<(n);j++)
        {
            if(a[i]>a[j])
            {
            int t=a[i];
            a[i]=a[j];
            a[j]=t;
            }
        }
    }
        for(int i=0;i<n;i++)
        {
            printf("the number are a[%d]=%d",i,a[i]);
            printf("\n");
        }
        return 0;
    

}