#include <stdio.h>
int main()
{
    int r, c, m, k;
    printf("enter the number of rows");
    scanf("%d", &r);
    printf("enter the number of column");
    scanf("%d", &c);
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {

            printf("enter value:");
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c-i; j++)
        {
                printf("%d ", a[i][j]);
        }
            printf("\n");
        
    }
    
    return 0;
}
