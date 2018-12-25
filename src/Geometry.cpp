
#include "Geometry.hpp"

bool Geometry::operator<(const Point &p0, const Point &p1)
{
    if (p0.x != p1.x || p0.y != p1.y || p0.z != p1.z)
        return p0.distance() <= p1.distance();

    return false;
}