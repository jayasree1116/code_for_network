#include<stdio.h>
int main()
{
int i,j,temp,n;
int arr[]={2,5,9,8,7,4};
n=sizeof(arr)/sizeof(arr[0]);
printf("%d++++++\n",n);
for(i=0;i<n-1;i++)
{
for(j=i;j<n-i-1;j++)
{
if(arr[j]>arr[j +1])
{
temp=arr[j];
arr[j]=arr[j +1];
arr[j +1]=temp;
}
}
}
for(i =0; i < n; i++)
{
printf("%d######\n",arr[i]);
}
return 0;
}


