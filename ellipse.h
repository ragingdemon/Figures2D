#pragma once
#include "figure2d.h"
#include "point2d.h"
#include "line.h"
#include <string>
class Ellipse : public Figure2D
{
    double a,b;
    Point2D center;
public:
    Ellipse(double a = 1,double b = 1, Point2D center = Point2D());
    Ellipse(const Ellipse &e);
    virtual ~Ellipse();
    virtual double area()const;
    virtual double perimetro()const;
    virtual bool intersects(const Figure2D &f)const;
    virtual std::string toString();
};
