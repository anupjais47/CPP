import turtle

# Creating turtle
t = turtle.Turtle()

n = 69
if n <= 50:
    t.circle(n)
else:
    t.forward(n)
    t.backward(n - 69)

turtle.mainloop()
