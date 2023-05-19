#include <stdio.h>
int main()
{
    int r, c;
    printf("enter the nnumber of rows");
    scanf("%d", &r);
    printf("enter the number of columns");
    scanf("%d", &c);
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("enter the numbers a[%d][%d]", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i <= 0)
            {
                printf("%d ", a[i][j]);
            }
            else if (i % 2 != 0)
            {
                printf("%d ", a[i][c - j - 1]);
            }
            else if (i % 2 == 0)
            {
                printf("%d ", a[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}