#include "rectangle.h"



Rectangle::Rectangle(Point2D p1, Point2D p2) :
Quadrilateral(p1,Point2D(p2.getX(),p1.getY()),p2,Point2D(p1.getX(),p2.getY()))
{

}

Rectangle::Rectangle(Point2D p1, double b, double h) :
Quadrilateral(p1,Point2D(p1.getX() + b,p1.getY()),Point2D(p1.getX() + b,p1.getY() - h),
              Point2D(p1.getX(),p1.getY() - h))
{

}

Rectangle::Rectangle(const Rectangle &r) :
Quadrilateral(r)
{

}

Rectangle::~Rectangle()
{

}

double Rectangle::area() const
{
    double width = a.distance(b);
    double height = b.distance(c);
    return width * height;
}

double Rectangle::perimetro() const
{
    double width = a.distance(b);
    double height = b.distance(c);
    return (2*width) + (2*height);
}

bool Rectangle::intersects() const
{
    return false;
}
