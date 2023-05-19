#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("enter the array limit");
    scanf("%d",&n);
    char *pntr=(char*)malloc(n*sizeof(char));
    for(int i=0;i<n;i++)
    {
        printf("enter the values=");
        scanf(" %c",(pntr+i));
    }
    puts(pntr);
   /* for(int i=0;i<n;i++)
    {
        printf("the value at %i index=%c\n",i,*pntr+i);
    }*/
    return 0;
}