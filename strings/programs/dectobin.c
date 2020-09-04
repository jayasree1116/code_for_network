#include<stdio.h>
int main()
{
int num=16;
int bin=0,j=1,rem;
while(num>0)
{
rem=num%2;
bin=bin+rem*j;
num=num/2;
j=j*10;
}
printf("%d",bin);
return 0;
}

