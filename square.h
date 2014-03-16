#pragma once
#include "rectangle.h"
#include "point2d.h"
class Square : public Rectangle
{
public:
    Square(Point2D p1,double l);
    Square(const Square &s);
    virtual ~Square();
    //virtual bool intersects()const;
};
