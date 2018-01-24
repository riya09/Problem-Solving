from turtle import *
def move(distance,level):
    speed(0)
    if level>0:
        fd(distance)
        rt(30)
        move(distance*0.8,level-1)
        lt(90)
        move(distance*0.7,level-1)
        rt(60)
        bk(distance)

setheading(90)
move(100,12)
exitonclick()
