#include<stdio.h>
int main()
{
int n;
printf("enter the limit= ");
scanf("%d",&n);
int a[n+1];
for(int i=0;i<n;i++)
{
    printf("enter the  digits= ");
    scanf("%d",&a[i]);

}
int p,e;
printf("enter the position");
scanf("%d",&p);
printf("\n");
printf("enter the element");
scanf("%d",&e);
for(int i=n-1;i>=p;i--)
{
    a[i+1]=a[i];

}
a[p]=e;
for(int i=0;i<(n+1);i++)
{
    printf("the number a[%d]=%d",i,a[i]);
    printf("\n");
}
}