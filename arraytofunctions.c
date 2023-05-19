#include<stdio.h>
void scanner(int m[],int num);
int summer(int arr2[],int o)

{
int s=0;
for(int j=0;j<o;j++)
{
    s=s+arr2[j];
}
return s;
}
int main()
{
    int k;
printf("enter the size of array=");
scanf("%d",&k);
int arr[k];
scanner(arr,k);
int q=summer(arr,k);
printf("the sum is=%d",q);
}
void scanner(int n[],int num1)
{
    for(int i=0;i<num1;i++)
    {
        printf("enter the value at a[%d]",i);
        scanf("%d",&n[i]);
    }
}