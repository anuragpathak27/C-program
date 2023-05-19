#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int *pntr;
    printf("enter the number of array limit you want=");  
    scanf("%d",&n);
    pntr=(int*)calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
    {
        printf("enter the value of number at %d=",i);
        scanf("%d",&pntr[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("the value is%d\n",pntr[i]);
    }
    return 0;
}