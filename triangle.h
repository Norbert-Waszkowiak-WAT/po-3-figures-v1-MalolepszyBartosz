#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <string>
#include "point.h"
#include "line.h"

class Triangle {
private:
    Point a;
    Point b;
    Point c;

public:
    Triangle(Point a, Point b, Point c);

    Triangle(const Triangle &other);

    bool equals(const Triangle &other) const;

    void move(double x, double y);

    void flip();

    double getSurface() const;

    std::string toString() const;
};

#endif