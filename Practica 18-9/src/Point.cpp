#include "Point.h"
#include <iostream>

using namespace std;

Point::Point()
{
    x = 0;
    y = 0;
}

Point::Point(double nx, double ny)
{
    x = nx;
    y = ny;
}

void Point::print(){
    cout << "(" << x << ", " << y << ")";
}
