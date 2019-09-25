
#include <iostream>
#include "Point.h"
#include "Vector.h"

using namespace std;


int main()
{
    Point p(2,2);
    Point q(3,4);
//    p.print();
//    q.print();
    Vector v(p, q);
    v.printV();
    cout << endl;
    cout << v.ModV();
    return 0;
}
