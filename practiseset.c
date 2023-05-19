#include<stdio.h>
int main()
{
char str[100];
fgets(str,100,stdin);
printf("%c",str[2]);
    return 0;
}