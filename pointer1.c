#include<stdio.h>
int main()
{
  int a[]={1,2,3,4,5};
  int *pntr;
  pntr=a;
  printf("%d",(pntr+1));
    return 0;
}