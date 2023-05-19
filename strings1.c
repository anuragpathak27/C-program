#include <stdio.h>
void pratima(char str[])
{
    int i=0;
    while(str[i]!=0)
    {
        printf("%c\n",str[i]);
        i++;

    }
}
int main()
{
char str[4];
gets(str);
pratima(str);
//\\puts(str);
//printf("%s",str);
    return 0;
}
