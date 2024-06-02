def Cel(a):
    c=(a-32)*5/9
    return c
def Fah(a):
    d=(a*9/5)+32
    return d
print("\n\t1. For C to F \n\t2. For F to C ")
co=int(input("\n\n Enter the choices : "))
num=int(input("Enter the temperature : "))
c=Cel(num)
b=Fah(num)
if co==1:
    print("F to C : ",c)
elif co==2:
    print("F to C : ",b)
else:
    print("Invalid choice")

