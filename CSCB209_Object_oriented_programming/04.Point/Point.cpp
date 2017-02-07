#include "Point.h"
#include <iostream>
using namespace std;
 
Point::Point(int x, int y) : x(x), y(y) {}
 
Point::Point(const Point& p) {
     x = p.x;
     y = p.y;
}
 
Point::~Point() {}
 
void Point::set_x(int x) { this->x = x; }
void Point::set_y(int y) { this->y = y; }
int Point::get_x()const { return x; }
int Point::get_y()const { return y; }
 
void Point::read() {
     cout << "x= ";
     cin >> x;
     cout << "y= ";
     cin >> y;
}
 
void Point::print() const {
     cout << x << ", " << y << endl;
}
 
//redefining the prefix version of the operator ++
Point& Point::operator++() {
     //increases coordinates of point with 1
     x += 1;
     y += 1;
     //return new value
     return *this;
}
 
//redefining the postfix version of the operator ++
Point Point::operator++(int) {
     //saves the current point
     Point tmp = *this;
     //increases coordinates of point with 1
     x += 1;
     y += 1;
     //return the point before the increase
     return tmp;
}
