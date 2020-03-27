#include <iostream>
#include "circle.h"
#include <cstdlib>

using namespace std;

double Circle::getRadius()
{
    return radius;
}
double Circle::getArea()
{
return radius*radius*3.1416;
}
string Circle::getColor()
{
    return color;
}
double Circle::compareArea(Circle circle)
{
    return this->getArea() > circle.getArea() ;
}
