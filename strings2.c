#include<stdio.h>
//#include<string.h>
int main()
{
//char str1[1000];
//char str2[100];
//gets(str1);
//gets(str2);
//puts(str1);
//char s1[]="anupriya hottie";
//char s2[]="anupriya hottie";
//printf("the strmpc value is s1,s2 returned %d",strcmp(s1,s2));
int a[]={5,7,8,9};
int* pntr=&a[1];
printf("%d",*(pntr)); 
return 0;
}