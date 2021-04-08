from functools import *
a=[5,4,3,2,1]
b=reduce(lambda x,y:(x*y),a)
print(b)