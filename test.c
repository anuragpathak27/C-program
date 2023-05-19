#include<stdio.h>
int main()
{
    int n;
    int t;
    printf("enter the desired number");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("entr the first number");
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)

        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("the number is=%d",a[n-1]);
    return 0;
}