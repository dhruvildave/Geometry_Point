#pragma once
#include "map1.hpp"

namespace Geometry
{

struct Point
{
    double x;
    double y;
    double z;

    Point(double x, double y, double z) : x{x}, y{y}, z{z} {}
    Point(double x, double y) : Point(x, y, 0) {}
    Point(double x) : Point(x, 0, 0) {}
    Point() : Point(0, 0, 0) {}

    double distance(void) const { return sqrt(x * x + y * y + z * z); }
};

bool operator<(const Point &, const Point &);

} // namespace Geometry
