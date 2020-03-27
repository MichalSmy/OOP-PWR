#include <iostream>

using namespace std;

class Circle
{
    private:
    double radius;
    string color;
    public:
    Circle(double r = 1.0, string c = "red") {
      radius = r;
      color = c;
   }
    double getRadius();
    double getArea();
    string getColor();
    double compareArea(Circle circle);
};
