#include "figure2d.h"
#include "typeinfo"
int Figure2D::count = 0;

Figure2D::Figure2D(int size) :
    size(size)
{
    count++;    
    lines = new Line*[size];
    for (int i = 0; i < size; ++i) {
        lines[i] = NULL;
    }
}

Figure2D::Figure2D(const Figure2D &f) :
    size(f.size)
{
    count++;
    lines = new Line*[size];
    for (int i = 0; i < size; ++i) {
        lines[i] = f.lines[i];
    }
}

Figure2D::~Figure2D() {
    count--;
    if (lines) {
        for (int i = 0; i < size; ++i) {
            if (lines[i]) {
                delete lines[i];
            }
        }
        delete[] lines;
    }
}

std::string Figure2D::getType()
{
    return typeid(*this).name();
}
