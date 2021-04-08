arr=[9,7,6,5,4]
temp=0
for i in range(0,len(arr)):
    for j in range(i+1,len(arr)):
        if(arr[i]>arr[j]):
            temp=arr[i]
            arr[i]=arr[j]
            arr[j]=temp
for i in range(0,len(arr)):
    print(arr[i],end=" ")			
			