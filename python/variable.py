def add(sum,*args):
    print(sum)
    cal_sum=0
    for i in args:
        cal_sum+=i
    print('sum of numbers=',(sum+cal_sum))
add(5,10)
add(5,10,15,20,30)	