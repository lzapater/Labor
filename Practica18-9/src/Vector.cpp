#include "Vector.h"
#include "Point.h"
#include <iostream>
#include "math.h"

using namespace std;

Vector::Vector()
{
    from = Point();
    to = Point();
}

Vector::Vector(Point a, Point b)
{
    from = a;
    to = b;
}

void Vector::printV(){
    from.print();
    cout << " -> ";
    to.print();
}

double Vector::ModV(){
    return sqrt((from.x-to.x)*(from.x-to.x)+
                (from.y-to.y)*(from.y-to.y));
}
