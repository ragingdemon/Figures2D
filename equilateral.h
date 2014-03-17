#pragma once
#include "triangle.h"
#include "point2d.h"

class Equilateral : public Triangle
{
public:
    Equilateral(Point2D a, double l = 1);
    Equilateral(const Equilateral& e);
    virtual ~Equilateral();   
};
