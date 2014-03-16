#pragma once
#include <string>

using std::string;

class Point2D {
    double x, y;

public:

    Point2D(double = 0, double = 0);

    void print();

    string toString();

    double distance(Point2D)const;

    void setX(double);

    void setY(double);

    double getX();

    double getY();

};
