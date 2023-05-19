#include<stdio.h>
int  main()
{
    int a;
    printf("enter the desired size of pyramid");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        for(int j=a;j>=(i-1);j--)
        {
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
