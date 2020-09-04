#include<stdio.h>
int main()
{
int num=10000;
int dec=0,d,j=1,rem;
while(num>0)
{
rem=num%10;
d=rem*j;
dec=dec+d;
j*=2;
num/=10;
}
printf("%d",dec);
return 0;
}
