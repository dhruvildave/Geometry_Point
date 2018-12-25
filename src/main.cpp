
#include "map_fun.hpp"

int main(void)
{
    std::map<Geometry::Point, double> m;

    map_fun::map_in(m);
    std::cout << '\n';
    map_fun::map_out(m);

    return 0;
}
