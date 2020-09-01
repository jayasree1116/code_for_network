
#include<stdio.h>
int main()
{
int i,j,temp,n,arr[50];
printf("enter the no of elements:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
//printf("enter the elements: %d", i+1 );
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
j=i;
while(j>0&&arr[j]<arr[j-1])
{
temp=arr[j];
arr[j]=arr[j-1];
arr[j-1]=temp;
j--;
}
}
printf("sorted list is:\n");
for(i=0;i<n;i++)
printf("%d \t",arr[i]);
printf("\n");
return 0;
}

