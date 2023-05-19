#include<stdio.h>
int main()
{
    int r,c,m=0;
    printf("enter the numbers of rows");
    scanf("%d",&r);
    printf("enter the number of columns");
    scanf("%d",&c);
    int a[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("enter the numbers");
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==j)
            {
                if(a[i][j]==1)
                {
                m++;
                }
            }
             else
             {
                if(a[i][j]==0)
                {
                    m++;
                }
             }
        }
    }
    if(m==(r*c))
    {
        printf("it is a identity matrix");

    }
    else
    {
        printf("it is not a identity matrix");
    }
    return 0;
}