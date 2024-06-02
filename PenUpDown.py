import turtle

# Creating turtle
t = turtle.Turtle()

t.speed(1)
t.fd(100)
t.rt(90)
t.penup()
t.fd(50)
t.rt(90)

t.pendown()
t.speed(2)
t.fd(100)
t.rt(90)
t.penup()
t.fd(100)
t.rt(90)

t.speed(2)
t.pendown()
t.fd(100)

turtle.mainloop()
