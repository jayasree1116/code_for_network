def jaya(fun):
    def inner():
        value=fun()
        return value*2
    return inner
@jaya
def num():
    return 10
print(num())
  	