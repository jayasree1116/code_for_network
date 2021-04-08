import sys
args=sys.argv[1:]
n=len(sys.argv)
args=sys.argv
print("no of command line args:",n)
print("the args are:",args)
print("print the args in different lines:")
for a in args:
    print(a)