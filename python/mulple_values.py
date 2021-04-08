def sum_sub_mul_div(a,b):
    c=a+b
    d=a-b
    e=a*b
    f=a//b
    return c,d,e,f
res=sum_sub_mul_div(19,23)
print("the result are:")
for i in res:
    print(i)