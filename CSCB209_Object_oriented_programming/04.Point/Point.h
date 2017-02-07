#ifndef POINT_H_
#define POINT_H_
 
class Point {
private:
     int x, y;
public:
     Point(int = 0, int = 0);
     Point(const Point&);
     ~Point();
     
     void set_x(int);
     void set_y(int);
     inline int get_x() const;
     inline int get_y() const;
     
     void read();
     void print() const;
     Point& operator++();
     Point operator++(int);
};
 
#endif
