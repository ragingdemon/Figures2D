#pragma once
#include "figure2d.h"
#include "line.h"
#include "point2d.h"
#include <string>
class Triangle : public Figure2D
{
    Point2D a,b,c;
public:
    Triangle(Point2D a,Point2D b,Point2D c);
    Triangle(const Triangle &t);
    virtual ~Triangle();
    virtual double area()const;
    virtual double perimetro()const;
    virtual bool intersects()const=0;
    virtual std::string toString();
};
