#include "Quadrilateral.h"
#include <sstream>
Quadrilateral::Quadrilateral(Point2D a,Point2D b,Point2D c,Point2D d) :
    Figure2D(4),a(a),b(b),c(c),d(d)
    {
        lines[0] = new Line(a,b);
        lines[1] = new Line(b,c);
        lines[2] = new Line(c,d);
        lines[3] = new Line(d,a);
    }

Quadrilateral::Quadrilateral(const Quadrilateral& q) :
Figure2D(q),a(q.a),b(q.b),c(q.c),d(q.d)
{
}

Quadrilateral::~Quadrilateral() {
}

std::string Quadrilateral::toString()
{
    std::stringstream ss;
    ss<<getType().substr(1)<<": "<<"a = "<<a.toString()<<", b = "<<b.toString()
        <<", c = "<<c.toString()<<", d = "<<d.toString()<<'\n'
        <<"area = "<<area()<<", perimetro = "<<perimetro();
    return ss.str();
}

