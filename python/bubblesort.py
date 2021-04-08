from array import *
x=array('i',[])
print("no of elements:",end='')
n=int(input())
for i in range(n):
    print("enter elements:",end='')
    x.append(int(input()))
print("original array: ",x)
flag=False
for i in range(n-1):
    for j in range(n-1-i):
        if x[j]>x[j+1]:
            temp=x[j]
            x[j]=x[j+1]
            x[j+1]=temp
    flag=True
    if flag==False:
        break
    else:
        flag=False
print("sorted array= ",x)