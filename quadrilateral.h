#ifndef QUADRILATERAL_H
#define QUADRILATERAL_H
#include <string>
#include "point.h"

using namespace std;

class Quadrilateral {
private:
    Point a;
    Point b;
    Point c;
    Point d;

public:
    Quadrilateral(Point a, Point b, Point c, Point d);

    Quadrilateral(const Quadrilateral &other);

    bool equals(const Quadrilateral &other) const;

    void flip();

    void move(double x, double y);

    double getSurface() const;

    string toString() const;
};

#endif