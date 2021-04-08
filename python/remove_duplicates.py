def removeDuplicate(str):
    t=""
    for i in str:
        if(i in t):
            pass
        else:
            t=t+i
    print("With Order:",t)
      
str="jaya sree"
removeDuplicate(str)