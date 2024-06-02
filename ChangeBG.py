import turtle

col=input("Enter the background color name : ")
# Creating turtle screen
t = turtle.Turtle()

# t.circle(50)
turtle.bgcolor(col)
t.dot(44, "gray")
turtle.mainloop()