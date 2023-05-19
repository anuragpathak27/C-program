#include<stdio.h>
int main()
{
    int r,c,b=0,m=0;
    printf("enter the number of rows");
    scanf("%d",&r);
    printf("enter the number of column");
    scanf("%d",&c);
    int a[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
        
            printf("enter value:");
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<r;i++)
    {
        b=0;
        m=0;
        for(int j=0;j<c;j++)
        {
              b+=a[i][j];
              m+=a[j][i];

        }
          printf("the sum of rows=%d",b);
          printf("\n");
        printf("the sum of columns is=%d",m);
        printf("\n");
       
    }
   
    return 0;
}