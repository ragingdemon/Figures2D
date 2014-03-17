#include <cstdlib>
#include <vector>
#include <iostream>
#include "figure2d.h"
#include "Quadrilateral.h"
#include "rectangle.h"
#include "square.h"
#include "triangle.h"
#include "equilateral.h"
#include "rigth.h"
#include "ellipse.h"
#include "circle.h"

using namespace std;

int main(int argc, char** argv) {
    vector<Figure2D*> figures;
    figures.push_back(new Rectangle(Point2D(0,1),Point2D(1,0)));
    figures.push_back(new Rectangle(Point2D(0,1),1,1));
    figures.push_back(new Square(Point2D(2,2),1));
    figures.push_back(new Equilateral(Point2D(0,0)));
    figures.push_back(new Rigth(Point2D(0.5,0.5)));
    figures.push_back(new Ellipse());
    figures.push_back(new Circle());
    for (unsigned int i = 0; i < figures.size(); ++i) {
        cout<<figures[i]->toString()<<endl;
    }

    cout<<figures[0]->intersects(*figures[1])<<endl;
    cout<<figures[0]->intersects(*figures[2])<<endl;
    cout<<figures[0]->intersects(*figures[4])<<endl;
    for (unsigned int i = 0; i < figures.size(); ++i) {
        delete figures[i];
    }
    return 0;
}

