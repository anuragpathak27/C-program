#include<stdio.h>
int  sum();
int  sum()
{
int a,b,sum=0;
printf("enter two numbeerrs");
scanf("%d %d",&a,&b);
sum=a+b;
return sum;
}

int main()
{
    
    printf("the output is=%d",sum());

    return 0;
}
 



