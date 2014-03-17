#include "line.h"
#include <cmath>

bool Line::sharePoint(double num,double left,double rigth)const
{
    if ((equals(num,left) || num > left) && (equals(num,rigth) || num < rigth)) {
        return true;
    }
    return false;
}

Line::Line(Point2D &a, Point2D &b)
{
    if (a.getX() < b.getX() || equals(a.getX() , b.getX())) {
        domainLeft = a.getX();
        domainRigth = b.getX();
    }else{
        domainLeft = b.getX();
        domainRigth = a.getX();
    }
    if (a.getY() < b.getY() || equals(a.getY() , b.getY())) {
        rangeLeft = a.getY();
        rangeRigth = b.getY();
    }else{
        rangeLeft = b.getY();
        rangeRigth = a.getY();
    }
}

Line::Line(const Line &l) :
    domainLeft(l.domainLeft),domainRigth(l.domainRigth), rangeLeft(l.rangeLeft),rangeRigth(l.rangeRigth)
{

}

bool Line::equals(double a, double b) const
{
    double number = std::abs(a - b) ;
    if (number < 0.0001) {
        return true;
    }
    return false;
}

double Line::m() const
{
    if (equals(domainLeft,domainRigth)) {
        return (rangeLeft-rangeRigth)/0.0001;
    }
    return (rangeLeft-rangeRigth)/(domainLeft-domainRigth);
}

double Line::b(double x, double y) const
{
    return y - m()*x;
}

bool Line::intersects(const Line &l) const
{
    if (sharePoint(l.domainLeft,domainLeft,domainRigth) || sharePoint(l.domainRigth,domainLeft,domainRigth)) {
        if (sharePoint(l.rangeLeft,rangeLeft,rangeRigth) || sharePoint(l.rangeRigth,rangeLeft,rangeRigth)) {
            return true;
        }
    }
    return false;
}


