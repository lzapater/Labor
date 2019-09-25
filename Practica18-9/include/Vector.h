#ifndef VECTOR_H
#define VECTOR_H
#include "Point.h"

class Vector
{
    public:
        Point from, to;
        Vector();
        Vector(Point from, Point to);
        void printV();
        double ModV();
};

#endif // VECTOR_H
