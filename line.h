#pragma once
#include "point2d.h"
class Line
{
    double domainLeft;
    double domainRigth;
    double rangeLeft;
    double rangeRigth;
    bool sharePoint(double num,double left,double rigth)const;
public:
    Line(Point2D &a,Point2D &b);
    Line(const Line &l);
    bool equals(double a , double b)const;
    double m()const;
    double b(double x , double y)const;
    bool intersects(const Line &l)const;
};
