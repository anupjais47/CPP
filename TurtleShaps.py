import turtle
import time
t = turtle.Turtle()
# import os
# "turtle": The default turtle shape.
# "arrow": A simple arrow shape.
# "classic": The classic old-style turtle shape.
# "triangle": A triangle pointing upward.
# "square": A square shape.
# "circle": A circle shape.
# "turtle": Another turtle shape.
# "triangle": A triangle pointing upward.
# "triangle": A triangle pointing upward.
# "triangle": A triangle pointing upward.

# arrow_turtle = turtle.Turtle(shape="arrow")
# while(True):
for i in range(9):
    for cols in ["turtle", "arrow", "classic", "triangle", "square", "circle", "turtle", "triangle", "triangle"]:
        time.sleep(1)
        turtle.color(cols)
        t.forward(10)


turtle.done()
