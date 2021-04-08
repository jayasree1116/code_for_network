import array
str=input("enter marks:").split(',')
marks=[int(num) for num in str]
sum=0
for x in marks:
    print(x)
    sum+=x
print("total marks:",sum)
n=len(marks)
percent=sum/n
print("percentage:",percent)
	