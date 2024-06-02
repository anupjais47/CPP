import turtle

angle = 90
rot = 24
stick = 50
length = 600
width = (length/2)/2
def cir():
    for j in range(5):
        t.rt(1)
        t.fd(1)

def line():
    # t.goto(100,None)
    t.rt(angle)
    t.fd(stick)
    t.bk(stick)


t = turtle.Turtle()

turtle.bgcolor('#000080')
# turtle.bgcolor('black')
t.pensize(3)
t.pencolor('blue')


def ashok():  #Ashok-Chakra
    # turtle.bgcolor('black')
    # t.goto(80,None)
    t.speed(0)
    t.fd(length/2)
    t.rt(angle)
    t.fd(width/2)
    t.pensize(3)
    t.pencolor('blue')

    for i in range(rot):
        t.rt(10)
        # t.pensize(2)
        t.fd(8)
        cir()
        line()
        # t.fd(5)
        t.lt(angle)

    t.lt(90)
    t.fd(2)
    t.pencolor('red')
    t.fd(3)
    t.rt(90)

    # t.bk(13)
    # t.pensize(2)
    # t.bk(3)

    # t.speed(1)
    # t.goto(10, 1)

    # t.fd(30)
    t.pencolor('black')
    # turtle.color(5,'white')
    t.bk(width/2)
    # t.lt(angle)
    # t.bk(length/2)
#     t.goto(0,5)


# for i in range(rot):
#     t.rt(10)
#     # t.pensize(2)
#     t.fd(8)
#     cir()
#     line()
#     t.lt(angle)

ashok()
# t.hideturtle()
turtle.mainloop()
