#ifndef _COMPLEX_H
#define _COMPLEX_H
#include <iostream>

class CComplex {
friend std::ostream& operator<<(std::ostream&, const CComplex &);
friend const CComplex operator/(const CComplex &, const CComplex &);
private:
    double x, y;
public:
    CComplex(double = 0, double = 0);
    ~CComplex();

    int setX(double = 0);
    double getX() const;
    int setY(double = 0);
    double getY() const;

    int print() const;
    int read();

    CComplex add(const CComplex &) const;
    CComplex sub(const CComplex &) const;
    CComplex multi(const CComplex &) const;
    CComplex div(const CComplex &) const;

    const CComplex operator+(const CComplex &)const;
    const CComplex operator-(const CComplex &)const;
    CComplex operator~()const;
    CComplex& operator-();
    CComplex operator^(const int)const;
};

std::ostream& operator<<(std::ostream&, const CComplex &);
const CComplex operator*(const CComplex &, const CComplex &);
const CComplex operator/(const CComplex &, const CComplex &);

#endif //CCOMPLEX_H_