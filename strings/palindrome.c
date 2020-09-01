#include<stdio.h>
#include<string.h>
int main()
{
char str[]="ABBCCBBA";
int i=0,j=strlen(str)-1;
while(j>i)
{
if(str[i++]!=str[j--])
{
printf("not a palindrome");
return;
}
printf("palindrome");
return 0;
}
}
