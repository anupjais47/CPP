import turtle

# Creating turtle from Turtle
t = turtle.Turtle()

t.shapesize(1, 1, 1)

t.begin_fill()
t.pensize(2)
t.pencolor('blue')
t.fd(500)
t.lt(120)
t.fd(500)
t.lt(120)
t.fd(500)
t.color('pink', 'green')
t.end_fill()

turtle.hideturtle()
turtle.mainloop()
