#include<stdio.h>
int main()
{
    int a[10],count,n=10,t;
    
    for(int i=0;i<10;i++)
    {
        printf("enter the number=");
        scanf("%d",&a[i]);
    }
    

   for(int i=0;i<10;i++)
    {
        count=0;
        for(int j=0;j<10;j++)
        {
            if(a[i]==a[j]){
                count++;
            }
        }
        
        if(count<=n)
        {
             
            n=count;
            t=a[i];

        }
    }
    printf("lowest frrequency number is%d=%d",t,n);
    return 0;
}