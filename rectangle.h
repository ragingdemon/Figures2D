#pragma once
#include "Quadrilateral.h"
#include "point2d.h"
class Rectangle : public Quadrilateral
{
public:
    Rectangle(Point2D p1,Point2D p2);
    Rectangle(Point2D p1,double b, double h);
    Rectangle(const Rectangle &r);
    virtual ~Rectangle();
    virtual double area()const;
    virtual double perimetro()const;
    virtual bool intersects(const Figure2D &f)const;
};
