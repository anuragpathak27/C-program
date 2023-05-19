#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    int *pntr;
    scanf("%d", &n);
    pntr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("enter the numbers");
        scanf("%d", &pntr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("the outpput is %d \n", *(pntr + i));
    }
    return 0;
}