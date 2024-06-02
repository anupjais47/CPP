import turtle
t = turtle.Turtle()
length = 600
width = (length/2)/2
angle = 90


def box():
    for i in range(2):
        t.fd(length)
        t.rt(angle)
        t.fd(width)
        t.rt(angle)


def layer():
    t.lt(angle)
    t.pendown()
    t.fd(width)
    t.rt(angle)


t.pensize(3)

t.begin_fill()
t.bk(width*2)
t.color('green')
box()
t.end_fill()

t.begin_fill()
t.color('blue')
layer()
box()
t.end_fill()

t.begin_fill()
t.color('red')
layer()
box()
t.end_fill()

t.hideturtle()
turtle.done()
