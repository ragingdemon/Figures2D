#include "circle.h"


Circle::Circle(double r, Point2D center):
    Ellipse(r,r,center)
{

}

Circle::Circle(const Circle &c):
    Ellipse(c)
{

}

Circle::~Circle()
{

}
