#include<stdio.h>
#include<stdlib.h>
int bin(int arr[],int n,int item);
int main()
{
int i,n,item;
int index;
int arr[50];
printf("no of elements to be inserted:");
scanf("%d",&n);
printf("enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("enteR the element to be searched:");
scanf("%d",&item);
index=bin(arr,n,item);
if(index==-1)
{
printf("not found");
}
else 
printf("element found at %d %d",item,index);
return 0;
}
int bin(int arr[],int n,int item)
{
int low=0,high=n-1,mid;
mid=low+high/2;
if(item>arr[mid])
{
low=mid+1;
}
else if(item<arr[mid])
{
high=mid-1;
}
else 
return mid;
}

