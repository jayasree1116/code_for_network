#include<stdio.h>
#include<stdlib.h>
int lin(int arr[],int n,int item);
int main()
{
int i,n,item;int arr[50];int index;
printf("enter no of elemnets to be inserted:");
scanf("%d",&n);
printf("enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("enter the element to be searched:");
scanf("%d",&item);

index= lin(arr, n, item);
if(index==-1)
printf("element not found:");
else 
{
printf("element found at %d  %d",item,index);
return 0;
}
}
int lin(int arr[],int n,int item)
{
int i=0;
while(i<n&&item!=arr[i])
{
i++;
}
if(i<n)
{
return i;
}
else
{ 
return -1;
}
}


