def check_prime(num):
    for i in range(2,num):
	    if num%i==0:
		    x=0
		    break
    else:
		    x=1
    return x
num=15
r=check_prime(num)
if r==1:
    print(num,"is a prime:")
else:
    print(num,"is not a prime:")