def check_string(str):
   return str==str[:: -1] 
str="madam"
res=check_string(str)
if res:
   print("yes it is a palindrome:")
else:
   print("no it is a palindrome:")
