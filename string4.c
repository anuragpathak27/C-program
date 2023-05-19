#include<stdio.h>
int main()
{
 //char str[100];
 //fgets(str,100,stdin);
 int a[10],count,t;
 int  max=0;
 for(int i=0;i<10;i++)
 {
    printf("entr the number");
    scanf("%d",&a[i]);
 }    
 for(int i=0;i<10;i++)
 {
    count=0;
    for(int j=0;j<10;j++)
    {
        if(a[i]==a[j])
        {
            count++;
        }
    }
    if(count>=max){
        max=count;
        t=a[i];
    }

    
 }
 printf("the highest frequency of %d =%d",t,max);
 return 0;
}