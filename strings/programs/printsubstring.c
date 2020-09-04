#include<stdio.h>
#include<string.h>
void substr(char str[],int a,int b)
{
while(a<=b)
{
printf("%c",str[a]);
substr(str,a,b);
}
}
int main()
{
char str[]="venkata";
substr(str,2,4);
return 0;
}

