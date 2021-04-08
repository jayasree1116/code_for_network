def fact(num):
    prod=1
    while num>=1:
	    prod*=num
	    num-=1
    return prod
fact(5)
print(fact(5))	