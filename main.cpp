#include <cstdlib>
#include <vector>
#include <iostream>
#include "figure2d.h"
#include "Quadrilateral.h"
#include "rectangle.h"
#include "square.h"

using namespace std;

int main(int argc, char** argv) {
    vector<Figure2D*> figures;
    figures.push_back(new Rectangle(Point2D(0,1),Point2D(1,0)));
    figures.push_back(new Rectangle(Point2D(0,1),1,1));
    figures.push_back(new Square(Point2D(0,1),1));
    for (unsigned int i = 0; i < figures.size(); ++i) {
        cout<<figures[i]->toString()<<endl;
    }

    for (unsigned int i = 0; i < figures.size(); ++i) {
        delete figures[i];
    }
    return 0;
}

