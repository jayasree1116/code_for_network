
#include<stdio.h>
int main()
{
int arr1[]={4,5,6,7,8};
int arr2[]={1,32,65,87,56};
int arr3[50];
 int n1=sizeof(arr1)/sizeof(arr1[0]);
int n2=sizeof(arr2)/sizeof(arr2[0]);
int i=0,j=0,k=0;
while((i<=n1-1)&& (j<=n2-1))
{
if(arr1[i]<arr2[j])
{
arr3[k++]=arr1[i++];
}
else
{
 arr3[k++]=arr2[j++];
}
}
while(i<=n1-1)
{
arr3[k++]=arr1[i++];
}
while(j<=n2-1)
{
arr3[k++]=arr2[j++];
}
printf("merged list:");
for(i=0;i<n1+n2;i++)
{
printf("%d ",arr3[i]);
}
return 0;
}
