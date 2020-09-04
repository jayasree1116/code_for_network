#include<stdio.h>
#include<string.h>
int search(char str1[],char str2[]);
int main()
{
int loc;
char str1[]="andhra";
char str2[]="hra";
loc=search(str1,str2);
if(loc==-1)
printf("location not found");
else
printf("location found at %d",loc+1);
return 0;
}
int search(char str1[],char str2[])
{
int i=0,j=0,k,loc;
while(str1[i]!='\0')
{
while(str1[i]!=str2[j]&&str1[i]!='\0')
{
i++;
}
k=i;
while(str1[i]==str2[j]&&str1[i]!='\0'&&str2[j]!='\0')
{
i++;

j++;
}
if(str2[j]=='\0')
return k;
if(str1[i]=='\0')
return -1;
i=k+1;
j=0;
}
}
