#include<stdio.h>
int main()
{
    int r,c;
    printf("enter the number of rows");
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
            printf("enter the value ofa[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
            printf("enter the value b[%d][%d]",i,j);
            scanf("%d",&b[i][j]);
            v[i][j]=a[i][j]+b[i][j];

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