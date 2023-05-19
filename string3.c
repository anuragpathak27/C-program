#include <stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int ascii;
    printf("enter the desired word");
    fgets(str, 100, stdin);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            ascii = str[i] - 32;

            str[i] = ascii;
        }
    }
    puts(str);
    return 0; 
}