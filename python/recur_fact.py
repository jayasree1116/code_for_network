def fact(num):
    if num==0:
	    result=1
    else:
        result=num*fact(num-1)
    return result
for i in range(1,11):
    print(i,fact(i))