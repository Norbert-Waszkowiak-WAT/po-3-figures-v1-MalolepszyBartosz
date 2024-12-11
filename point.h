#ifndef POINT_H
#define POINT_H

#include <string>

class Point {
private:
    double x;
    double y;

public:

    Point(double x, double y);


    Point(const Point &other);

    bool equals(const Point &other) const;

    std::string toString() const;

    double getX() const;
    double getY() const;

    void flip();

    void move(double a, double b);
};

#endif 