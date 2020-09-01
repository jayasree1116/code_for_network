#include<stdio.h>
#include<string.h>
void copy_str(char str1[],char str2[],int i);
int main()
{
	char str1[]="jaya sree";
	char str2[]="";
	copy_str(str1,str2,0);
	printf("%s",str2);
	return 0;

}
void copy_str(char str1[],char str2[],int i)
{
	str2[i]=str1[i];
	if(str1[i]=='\0')
		return 0;
	copy_str(str1,str2,i+1);

}
