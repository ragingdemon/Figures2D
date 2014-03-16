#include "square.h"




Square::Square(Point2D p1, double l) :
Rectangle(p1,l,l)
{

}

Square::Square(const Square &s) :
Rectangle(s)
{

}

Square::~Square()
{

}
