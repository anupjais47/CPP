# Using a for loop for drawing a rectangle in Turtle in Python
import turtle

ttl = turtle.Turtle()
ttl.speed(2)

for j in range(2):
    ttl.forward(140)  # Moving the turtle Forward by 140 units
    ttl.left(90)  # Turning the turtle by 90 degrees
    ttl.forward(70)  # Moving the turtle Forward by 70 units
    ttl.left(90)  # Turning the turtle by 90 degrees

turtle.mainloop()
