#pragma once

#include <string>
#include "line.h"
using std::string;

class Figure2D
 {
    static int count;
protected:
    Line **lines;
    const int size;
public:

    Figure2D(int size = 1);
    Figure2D(const Figure2D&);
    virtual ~Figure2D();
    Line **getLines() const;
    int getSize() const;
    virtual double area()const=0;
    virtual double perimetro()const=0;
    virtual bool intersects(const Figure2D &f)const=0;
    virtual string toString()= 0;
    virtual string getType();
};
