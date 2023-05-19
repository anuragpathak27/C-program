#include<stdio.h>
int main()

{
    char str[100];
    printf("enter your name=");
    gets(str);
    
    for(int i=0;i<10;i++)
    {
        printf("%s\n",str);

    }
    return 0;
}