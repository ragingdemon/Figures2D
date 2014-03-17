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

bool Rectangle::intersects(const Figure2D &f) const
{    
    if (f.getSize() > 1) {
        Line **temp = f.getLines();
        for (int i = 0; i < size; ++i) {
            for (int j = 0; j < f.getSize(); ++j) {
                if (lines[i]->intersects(*temp[j])) {
                    return true;
                }else if (temp[j]->intersects(*lines[i])){
                    return true;
                }
            }
        }
    }else{
        return f.intersects(*this);
    }
    return false;
}
