#pragma once
#include "ellipse.h"
#include "point2d.h"
#include "line.h"
class Circle : public Ellipse
{
public:
    Circle(double r = 1,Point2D center = Point2D());
    Circle(const Circle &c);
    virtual ~Circle();
};
