#pragma once
#include "Geometry.hpp"

namespace map_fun
{

std::istream &operator>>(std::istream &is, Geometry::Point &p);
std::ostream &operator<<(std::ostream &os, const Geometry::Point &p);
void map_in(std::map<Geometry::Point, double> &m);
void map_out(std::map<Geometry::Point, double> &m);

} // namespace map_fun
