#include<stdio.h>
#include<string.h>
int main()
{
 char str[20]="jaya";
 char str1[20]="ramu";
 int i,j;
 for(i=0;str[i]!='\0';i++)
 {
  for(j=0;str1[j]!='\0';j++)
  {
      if(str[i]==str1[j])
       break;
  }
if(str[i]!=str1[j])
{
printf("%c",str[i]);
}
}
return 0;
}
