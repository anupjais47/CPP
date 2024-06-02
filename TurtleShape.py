import turtle

# Creating turtle turtle
t = turtle.Turtle()

t.shape("turtle")
t.fd(250)
t.speed(1)
# Change to arrow
t.shape("arrow")
t.fd(150)
t.speed(0)
# Chnage to circle
t.shape("circle")
t.fd(350)
t.speed(3)
turtle.mainloop()
