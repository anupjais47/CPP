def Add(a,b):
    return a+b
def Sub(a,b):
    return a-b
def Mul(a,b):
    return a*b
def Div(a,b):
    return a/b
def Mod(a,b):
    return a%b

x=int(input("Enter a number a : "))
ch=input("Enter your choice(+/-/*/%) : ")
y=int(input("Enter a number b : "))
# print("Addition is ",Add(x,y))
if ch=='+':
    print("Addition is ",Add(x,y))
elif ch=='-':
    print("Subtraction is ",Sub(x,y))
elif ch=='*':
    print("Multiplication is ",Mul(x,y))
elif ch=='/':
    print("Division is ",Div(x,y))
elif ch=='%':
    if(y>0):
        print("Modulus is ",Mod(x,y))
    else:
        print("Division not possible.")
else:
    print("Invalid charater")