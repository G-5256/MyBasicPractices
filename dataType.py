x=input()

if(x.isdigit()):
    print("Integer")
elif(x[0]=='[' and x[-1]==']'):
    print("List")
elif(x[0]=='(' and x[-1]==')'):
    print("Tuple")
else:
 try :
    float(x)
    print("Float")
 except:
    print("String")
