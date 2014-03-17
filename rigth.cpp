#include "rigth.h"


Rigth::Rigth(Point2D a,double base, double higth):
    Triangle(a,Point2D(a.getX(),a.getY() + higth),Point2D(a.getX() + base,a.getY()))
{

}

Rigth::Rigth(const Rigth &r) : Triangle(r)
{

}

Rigth::~Rigth()
{

}
