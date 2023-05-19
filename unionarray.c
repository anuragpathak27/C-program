#include<stdio.h>
int main()
{
   int n,p,t;
    printf("enter the limit: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("enter the nnumbers: ");
        scanf("%d",&a[i]);
    }
    printf("enter the limit: ");
    scanf("%d",&p);
    int b[p];
    for(int i=0;i<p;i++)
    {
        printf("enter the nnumbers: ");
        scanf("%d",&b[i]);
    }
    int v=n+p;
    int c[v];
    int m=0;
  for(int i=0;i<n;i++)
    {
        c[m]=a[i];
        m++;
    }
    int k=n;
    for(int i=0;i<p;i++)
    {
        c[k]=b[i];
        k++;
    }
    for(int i=0;i<v;i++)
    {
        printf("the number is=%d",c[i]);
        printf("\n");
    }
    for(int i=0;i<v;i++)
    {
        for(int j=i+1;j<v;j++)
        {
            if(c[i]>c[j])
            {
                t=c[i];
                c[i]=c[j];
                c[j]=t;


            }
        }
    }
for(int i=0;i<v;i++)
{
    for(int j=i+1;j<n;j++)
    {
        if(c[i]==c[j])
        {
         for(int p=j;j<=(v-1);p++)
         {
            c[p]=c[p+1];
            
         }   
        }
    }
}
 for(int i=0;i<v;i++)
 {
    printf("the output is =%d",c[i]);
    printf("\n");
 }
    
    return 0;
}