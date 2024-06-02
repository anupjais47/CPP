import turtle

# col=
t = turtle.Turtle()

turtle.bgcolor('black')

t.pensize(2)
turtle.speed(200)

# while(True):
for i in range(6):
    for cols in ["red", "blue", "magenta", "green", "yellow", "white"]:
        turtle.color(cols)
        turtle.circle(100)
        turtle.lt(10)

# turtle.hideturtule()
turtle.hideturtle()
turtle.mainloop()
