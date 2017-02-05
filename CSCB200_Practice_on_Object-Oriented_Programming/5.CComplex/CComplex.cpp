#include "CComplex.h"
#include <iostream>

CComplex::CComplex(double x, double y) :x(x), y(y) {}

CComplex::~CComplex() {
    //std::cout << x << "+" << y << "i was destroyed. \n";
}

int CComplex::setX(double x) {
    this->x = x;
    return 0;
}

double CComplex::getX() const { return x; }

int CComplex::setY(double y) {
    this->y = y;
    return 0;
}

double CComplex::getY() const { return y; }

int CComplex::print() const {
    std::cout << x << "+" << y << "i";
    return 0;
}


int CComplex::read() {
    std::cout << "Enter real part:";
    std::cin >> x;
    std::cout << "Enter img part: ";
    std::cin >> y;
    return 0;
}

CComplex CComplex::add(const CComplex &other) const {
    return CComplex(x + other.x, y + other.y);
}


CComplex CComplex::sub(const CComplex &other) const {
    CComplex tmp(x - other.y, y - other.y);
    return tmp;
}

CComplex CComplex::multi(const CComplex &other) const {
    CComplex tmp;
    tmp = CComplex(x*other.y - y*other.x, x*other.y + y*other.x);
    return tmp;
}

CComplex CComplex::div(const CComplex &other) const {
    CComplex tmp;
    double d = other.x * other.x + other.y * other.y;
    tmp = multi(CComplex(other.x, -other.y));
    return CComplex(tmp.x / d, tmp.y / d);
}

const CComplex CComplex::operator+(const CComplex &other)const {
    return CComplex(x + other.x, y + other.y);
}


std::ostream& operator<<(std::ostream& out, const CComplex & other) {
    return out << other.x << (other.y >= 0 ? "+" : "") << other.y << "i";
}

const CComplex CComplex::operator - (const CComplex &a)const {
    return CComplex(x - a.x, y - a.y);
}

const CComplex operator*(const CComplex &left, const CComplex &right) {
    return CComplex(left.getX()*right.getY() - left.getY()*right.getX(),
        left.getX()*right.getY() +left.getY()*right.getX());
}

const CComplex operator/(const CComplex &l, const CComplex &r) {
    CComplex tmp;
    double del = r.x*r.x + r.y*r.y;
    tmp = l*CComplex(r.x, -r.y);
    return CComplex(tmp.x / del, tmp.y / del);
}

CComplex CComplex::operator~()const {
    return CComplex(x, -y);
}

CComplex& CComplex::operator-() {
    x = -x;
    y = -y;
    return *this;
}

CComplex CComplex::operator^(const int a)const {
    CComplex tmp = *this;
    for (size_t i = 0; i < a; i++) {
        tmp = tmp*(*this);
    }
    return tmp;
}