# Python Program to draw a half-circle filled with colour in Turtle
import turtle

ttl = turtle.Turtle()

# Providing the colour to be filled
ttl.pensize(5)
ttl.color("pink")

# Instructing to "begin" and "end" filling the "half-circle"
ttl.begin_fill()
ttl.circle(90, 280)
ttl.color('yellow')
ttl.end_fill()

# hiding the turtle after completing the drawing
ttl.hideturtle()
turtle.done()
