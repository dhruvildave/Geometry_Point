
#include "map_fun.hpp"

std::istream &map_fun::operator>>(std::istream &is, Geometry::Point &p)
{
    std::cout << "Enter x: ";
    std::cin >> p.x;
    std::cout << "Enter y: ";
    std::cin >> p.y;
    std::cout << "Enter z: ";
    std::cin >> p.z;
    std::cout << '\n';
    return is;
}

std::ostream &map_fun::operator<<(std::ostream &os, const Geometry::Point &p)
{
    std::cout << "(" << p.x << ", " << p.y << ", " << p.z << ")\n";
    return os;
}

void map_fun::map_in(std::map<Geometry::Point, double> &m)
{
    std::cout << "::Press 'Ctrl + D' to stop input::\n\n";
    for (Geometry::Point p; std::cin >> p;)
        m.insert(std::pair<Geometry::Point, double>(p, p.distance()));
    return;
}

void map_fun::map_out(std::map<Geometry::Point, double> &m)
{
    for (const auto &p : m)
        std::cout << p.first << "Distance from (0, 0, 0) == " << p.second << '\n';
    return;
}
