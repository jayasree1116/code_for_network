#include<stdio.h>
int main()
{
int num=1;
char *p;
p=(char *)&num;
if(*p==1)
printf("little endian");
else 
printf("big endian");
return 0;
}
