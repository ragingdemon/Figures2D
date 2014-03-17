#include "triangle.h"
#include <cmath>
#include <sstream>
Triangle::Triangle(Point2D a, Point2D b, Point2D c) :
    Figure2D(3),a(a),b(b),c(c)
{
    lines[0] = new Line(a,b);
    lines[1] = new Line(b,c);
    lines[2] = new Line(c,a);
}

Triangle::Triangle(const Triangle &t):
    Figure2D(t),a(t.a),b(t.b),c(t.c)
{

}

Triangle::~Triangle()
{

}

double Triangle::area() const
{
    double s = (0.5) * (perimetro());
    return std::sqrt(s*(s-a.distance(b))*(s-b.distance(c))*(s-c.distance(a)));
}

double Triangle::perimetro() const
{
    return a.distance(b) + b.distance(c) + c.distance(a);
}

bool Triangle::intersects(const Figure2D &f) const
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
    return false;}

std::string Triangle::toString()
{
    std::stringstream ss;
    ss<<getType().substr(1)<<": "<<"a = "<<a.toString()<<", b = "<<b.toString()
        <<", c = "<<c.toString()<<'\n'
        <<"area = "<<area()<<", perimetro = "<<perimetro();
    return ss.str();
}
