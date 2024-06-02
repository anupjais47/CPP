import turtle
t = turtle.Turtle()
turtle.hideturtle()
# def shp():
#     t.bk(200)
#     t.lt(90)
#     t.fd(100)
#     # t.goto(None,40)
#     t.rt(90)
#     t.fd(400)
# #     t.goto(None,-40)
#     t.rt(90)
#     t.fd(100)
#
#     t.lt(90)
#     t.bk(200)

turtle.bgcolor('black')
def shp():
    for i in range(2):
        t.fd(200)
        t.lt(90)
        t.fd(70)
        t.lt(90)

def str():
    # t.bk(200)
    t.rt(90)
    t.fd(200)


t.pensize(5)
t.pencolor('red')
t.begin_fill()
shp()
t.color('red')
t.end_fill()
str()
# t.rt(90)
# t.penup()
# t.fd(100)

t.pencolor('white')
t.begin_fill()
shp()
t.color('white')
t.end_fill()
str()
# t.rt(90)
# t.penup()
# t.fd(100)

t.pencolor('green')
t.begin_fill()
shp()
t.color('green')
t.end_fill()


t.hideturtle()
turtle.mainloop()
