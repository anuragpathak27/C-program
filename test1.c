#include<stdio.h>
int main()
{
    int n,p;

    printf("enter the limit of array=");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("enter the value=");
        scanf("%d",&a[i]);
    }
    printf("enter the value you want to search=");
    scanf("%d",&p);
    for(int i=0;i<n;i++)
    {
        if(a[i]==p)
        {
            printf("the element you entred is found\n");
            printf("the index of founded element is=%d",i);
            break;
        }
    }
    return 0;
}