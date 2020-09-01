#include<stdio.h>
#include<string.h>
void  palindrome(char str[]);
int main()
{
char str[]="madam";
palindrome(str);
return 0;
}
void palindrome(char str[])
{
int i=0,j=strlen(str)-1;
while(j<i)
{
if(str[i++]!=str[j--])
{
printf("not a palindrome");
return;
}
}
printf("palindrome");
}
