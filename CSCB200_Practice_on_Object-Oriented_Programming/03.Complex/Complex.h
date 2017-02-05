#ifndef COMPLEX_H_
#define COMPLEX_H_
 
class Complex {
private:
     double x, y;
public:
     Complex(double = 0, double = 0);
     ~Complex();
     
     void setX(double = 0);
     double getX() const;
     void setY(double = 0);
     double getY() const;
     
     void print() const;
     void read();
     
     Complex add(const Complex &) const;
     Complex sub(const Complex &) const;
     Complex multi(const Complex &) const;
     Complex div(const Complex &) const;
};
 
#endif //COMPLEX_H_