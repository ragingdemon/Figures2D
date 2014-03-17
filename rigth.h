#pragma once
#include "triangle.h"
#include "point2d.h"
class Rigth : public Triangle
{
public:
    Rigth(Point2D a = Point2D(),double base = 1, double higth = 1);
    Rigth(const Rigth &r);
    virtual ~Rigth();
};
