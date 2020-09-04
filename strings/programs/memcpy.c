#include<stdio.h>
#include<string.h>
int main()
{
char str1[10]="jayasree";
char dest[20];
memcpy(dest,str1,5);
printf("%s \n",dest);
memcpy(dest,str1,strlen(str1)+1);
return 0;
}
