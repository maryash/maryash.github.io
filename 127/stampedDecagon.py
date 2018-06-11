#stamped decagon

import turtle

taylor = turtle.Turtle()
taylor.color("purple")
taylor.shape("turtle")

for i in range(10):
  taylor.forward(100)
  taylor.stamp()
  taylor.left(36)
