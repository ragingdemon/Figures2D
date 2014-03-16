#pragma once
#include "point2d.h"
class Line
{
    double domainLeft;
    double domainRigth;
    double rangeLeft;
    double rangeRigth;
public:
    Line(Point2D &a,Point2D &b);
    Line(const Line &l);
    bool equals(double a , double b);
};
