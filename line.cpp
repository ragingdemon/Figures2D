#include "line.h"
#include <cmath>


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

bool Line::equals(double a, double b)
{
    double number = std::abs(a - b) ;
    if (number < 0.0001) {
        return true;
    }
    return false;
}
