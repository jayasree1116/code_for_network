def my_gen(x,y):
    while x<=y:
        yield x
        x+=1
gen=my_gen(10,20)
for i in gen:
    print(i)