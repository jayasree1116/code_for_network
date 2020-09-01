#include<stdio.h>
#include<string.h>
int main()
{
char str[20]="ataknev";
int i=0,j=strlen(str)-1,temp;
while(i<j)
{
temp=str[i];
str[i]=str[j];
str[j]=temp;
i++;
j--;
}
printf("%s",str);
return 0;
}

