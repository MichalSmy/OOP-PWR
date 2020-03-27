#include <iostream>
#include "circle.h"
#include <string>
using namespace std;

int main()
{
    double area;
Circle c1;
Circle c2(2.3, "blue");
 cout << "Circle1:" <<endl<<"Radius= " << c1.getRadius() << endl << "Area= "<< c1.getArea()<<endl <<"Color= "<< c1.getColor()<<endl;
 cout << "------------------------------"<<endl;
 cout << "Circle2:" <<endl<<"Radius= " << c2.getRadius() << endl << "Area= "<< c2.getArea()<<endl <<"Color= "<< c2.getColor()<<endl;
 cout << "------------------------------"<<endl;
if(c1.compareArea(c2))
{
    cout<<"Circle1 is bigger than Circle2"<<endl;
}
else
{
    cout<<"Circle2 is bigger than Circle1"<<endl;
}
}
