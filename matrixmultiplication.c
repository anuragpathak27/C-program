#include<stdio.h>
int main()
{
    
    int r,c,m=0,n=0;
    printf("enter the numbers of rows");
    scanf("%d",&r);
    printf("enter the number of columns");
    scanf("%d",&c);
    int a[r][c];
    int b[r][c];
    int v[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("enter the numbers a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
            printf("enter the value of b[%d][%d]",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<r;i++)
    {
        
        for(int j=0;j<c;j++)
        {
              v[i][j]=0;
            for(int k=0;k<c;k++)
            {
          
            v[i][j]+=a[i][k]*b[k][i];
            }
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",v[i][j]);
        }
        printf("\n");
    }
    return 0;
}