// Rectangle.cpp
#include "Rectangle.h"
namespace shapes {
    Rectangle::Rectangle() {}
    Rectangle::Rectangle(int x0, int y0, int x1, int y1) {
        this->x0 = x0; this->y0 = y0;
        this->x1 = x1; this->y1 = y1;
    }
    Rectangle::~Rectangle() {}
    int Rectangle::getArea() {
        return (x1 - x0) * (y1 - y0);
    }
    void Rectangle::getSize(int* w, int* h) {
        *w = x1 - x0; *h = y1 - y0;
    }
    void Rectangle::move(int dx, int dy) {
        x0 += dx; y0 += dy; x1 += dx; y1 += dy;
    }
}
