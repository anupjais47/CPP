import time
import turtle

# Set up the turtle screen
screen = turtle.Screen()
screen.bgcolor("white")

# Create turtles with different shapes
turtle_shapes = ["turtle", "arrow", "circle", "square", "triangle", "classic"]

# x_position = -200
# y_position = 100

for shape in turtle_shapes:
    t = turtle.Turtle(shape=shape)
    # t.penup()
    # t.goto(x_position, y_position)
    # t.pendown()
    t.forward(30)
    time.sleep(1)


    # y_position -= 50

# Hide the turtles
# turtle.hideturtle()

# Close the turtle graphics window when clicked
screen.exitonclick()
