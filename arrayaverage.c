#include<stdio.h>
int main()
{
    int n;
    int sum=0;
    float t;
    
    printf("enter the limit ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf(" enter the input");
        scanf("%d",&a[i]);
        sum+=a[i];

    }
    t=(float)sum/n;
    printf("the average of the given numbers are %f",t);
    return 0;
}