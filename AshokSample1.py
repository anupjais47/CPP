import turtle

def cir():
    for j in range(20):
        t.rt(1)
        # t.fd(1)

def line():
    # t.goto(100,None)
    t.rt(90)
    t.fd(100)
    t.bk(100)


t = turtle.Turtle()

# turtle.bgcolor('black')
t.pensize(3)
t.pencolor('blue')

for i in range(24):
    t.rt(10)
    # t.pensize(2)
    t.fd(28)
    cir()
    line()
    t.lt(90)

turtle.hideturtle()
turtle.mainloop()
