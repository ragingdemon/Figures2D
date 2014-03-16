#include "point2d.h"
#include <string>
#include <sstream>
#include <iostream>
#include <cmath>

using namespace std;

Point2D::Point2D(double x, double y) {

    setX(x);

    setY(y);

}

string Point2D::toString()
 {

    stringstream ss;

    ss << "[" << x << ", " << y << "]";

    return ss.str();

}

double Point2D::distance(Point2D p) const{

    return sqrt(pow(x - p.x, 2) + pow(y - p.y, 2));

}

void Point2D::setX(double x) {

    this->x = x;

}

void Point2D::setY(double y) {

    this->y = y;

}

double Point2D::getX() {

    return x;

}

double Point2D::getY() {

    return y;

}
