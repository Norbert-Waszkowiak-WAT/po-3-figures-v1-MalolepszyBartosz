#ifndef LINE_H
#define LINE_H
#include <string>
#include "point.h"
using namespace std;

class Line {
private:
    Point a;
    Point b;

public:
    
    Line(Point a, Point b);

    Line(const Line &other);

    bool equals(const Line &other) const;

    void flip();

    void move(double x, double y);

    string toString() const;
};

#endif