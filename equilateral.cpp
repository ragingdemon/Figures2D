#include "equilateral.h"
#include <cmath>
using std::sqrt;
Equilateral::Equilateral(Point2D a, double l):
    Triangle(Point2D(a.getX(), a.getY()),Point2D(a.getX() + (l/2.0), a.getY() - (sqrt(3)/2.0) * l)
             ,Point2D(a.getX() - (l/2.0), a.getY() - (sqrt(3)/2.0) * l))
{
}

Equilateral::Equilateral(const Equilateral &e):
    Triangle(e)
{

}

Equilateral::~Equilateral()
{

}

