#include "point.h"
#include <sstream>
#include <iomanip>
#include <string>
using namespace std;

Point::Point(double x, double y): x(x), y(y) {}

Point::Point(const Point &other): x(other.x), y(other.y) {}

double Point::getX() const {
    return x;
}

double Point::getY() const {
    return y;
}

bool Point::equals(const Point &other) const {
    return other.x == x && other.y == y;
}


string Point::toString() const {
    ostringstream oss;
    oss << fixed << setprecision(1);
    oss << "Point(" << x << ", " << y << ")";
    return oss.str();
}

void Point::flip() {
    x = -x;
    y = -y;
}

void Point::move(double a, double b) {
    x += a;
    y += b;
}