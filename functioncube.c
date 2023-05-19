#include<stdio.h>
int perfect(int,int);
int  perfect(int i,int num)
{
    int sum=0;
 for(i;i<=num/2;i++)
 {
if(num%i==0)
 {
  printf("the number is=%d\n",i);
 }
}
return 0;
}
int main()
{
    
    perfect(3,12);
    return 0;
}
