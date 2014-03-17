#include "ellipse.h"
#include <sstream>
#include <cmath>

Ellipse::Ellipse(double a, double b, Point2D center) :
    Figure2D(0),a(a),b(b),center(center)
{

}

Ellipse::Ellipse(const Ellipse &e) :
    Figure2D(e),a(e.a),b(e.b),center(e.center)
{

}

Ellipse::~Ellipse()
{

}

double Ellipse::area() const
{
    return M_PI * a * b;
}

double Ellipse::perimetro() const
{
    return M_PI * (3*(a+b) - std::sqrt((3*a + b) * (a + 3*b)));
}


bool Ellipse::intersects(const Figure2D &f) const
{
    if (f.getSize() > 1) {
        return false;
    } else{
        return false;
    }
    return false;
}

std::string Ellipse::toString()
{
    std::stringstream ss;
    ss<<getType().substr(1)<<": "<<"Center = "<<center.toString()<<", a = "<<a<<", b = "<<b
        <<'\n'<<"area = "<<area()<<", perimetro = "<<perimetro();
    return ss.str();
}

