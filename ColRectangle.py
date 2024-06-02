# Python Program to draw a rectangle filled with colour in Turtle
import turtle

ttl = turtle.Turtle()

# Providing the color to be filled
# ttl.color("green")

# Instructing to "begin" and "end" filling the "rectangle"
ttl.begin_fill()

# for-loop to run 2 times to complete drawing the sides of rectangle
for j in range(2):
    ttl.color("green")
    ttl.forward(160)
    ttl.right(90)
    ttl.forward(80)
    ttl.right(90)
ttl.end_fill()


# for j in range(2):
#     ttl.forward(160)
#     ttl.right(90)
#     ttl.forward(80)
#     ttl.right(90)
# ttl.end_fill()
#
# for j in range(2):
#     ttl.forward(160)
#     ttl.right(90)
#     ttl.forward(80)
#     ttl.right(90)
# ttl.end_fill()
# hiding the turtle after completing the drawing
# ttl.hideturtle()
turtle.done()