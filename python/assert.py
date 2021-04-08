x=int(input("enter any number:"))
try:
    assert(x>0)
    print(x)
except AssertionError:
    print("wrong input:")		
