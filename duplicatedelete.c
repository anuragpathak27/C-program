#include<stdio.h>
int main()
{
    
       int n,t,m=0;
       int c[m];
    printf("enter the limit");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("enter the numbers");
        scanf("%d",&a[i]);

    }
    for(int i=0;i<(n-1);i++)
    {
        for(int j=0;j<(n-1-i);j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
  for(int i=0;i<n;i++)
  {
    if(a[i]!=a[i+1])
    {
        c[m]=a[i];
        m++;
    }
  }
    for(int i=0;i<=m;i++)
    {
        printf("the output is=%d",c[i]);
        printf("\n");
    }
    
  
    
return 0;
}
    