#include<stdio.h>
int c;
int vnr(int num1,int num2)

{
if(num1%num2==0)
return 1;
else 
return 0;

}
int main()
{
    c=vnr(250,10);
    printf("the output is=%d",c);
    return 0;

}