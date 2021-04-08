def jaya(fun):
    def inner():
        value=fun()
        return value*2
    return inner
def venki(fun):
    def inner():
        value=fun()
        return value-2
    return inner    
@jaya
@venki
def num():
    return 10
print(num())
  	