#pragma once
#include "figure2d.h"
#include "point2d.h"
#include "line.h"
#include <string>
using std::string;
class Quadrilateral : public Figure2D {
protected:
    Point2D a,b,c,d;
public:
    Quadrilateral(Point2D a,Point2D b,Point2D c,Point2D d);
    Quadrilateral(const Quadrilateral& q);
    virtual ~Quadrilateral();
    virtual double area()const=0;
    virtual double perimetro()const=0;
    virtual bool intersects(const Figure2D &f)const=0;
    virtual string toString();
};
