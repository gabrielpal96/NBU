#include <iostream>
#include <iomanip>
#include <cassert>
#include "Double.h"

Double::Double(double * arr, size_t sz):len(sz) {
    a = new double[len];
    for (size_t i = 0; i < len; i++) {
        a[i] = arr[i];
    }
}

Double::Double(const Double &r) {
    len = r.len;
    a = new double[len];
    for (size_t i = 0; i < len; i++) {
        a[i] = r.a[i];
    }
}

Double& Double::operator=(const Double &r) {
    if (this != &r) {
        len = r.len;
        if (a != NULL) {
          delete[] a;
        }
        a = new double[len];
        assert(a != NULL);
        for (size_t i = 0; i < len; i++) {
            a[i] = r.a[i];
        }
    }
    return *this;
}

double* Double::get_a()const { return a; }

void Double::set_a(double * arr, size_t l) {
    //size_t l = sizeof(arr) / sizeof(double);
    len = l;
    if (a != NULL) { 
      delete[] a;
    }
    a = new double[l];
    assert(a != NULL);
    for (size_t i = 0; i < l; i++) {
        a[i] = arr[i];
    }
}

Double::~Double() { delete[] a; }

size_t Double::get_len() const { return len; }

void Double::set_len(size_t l) { len = l; }

Double& Double::operator+=(const Double &r) {
    size_t l = (len < r.len) ? len : r.len;
    for (size_t i = 0; i < l; i++) {
        a[i] += r.a[i];
    }
    return *this;
}

Double operator+(const Double & l, const Double &r) {
    Double tmp(l);
    tmp += r;
    return tmp;
}


std::ostream& Double::inserter(std::ostream & out) const {
    out << "Object length: " << len << std::endl;
    for (size_t i = 0; i < len; i++) {
        out << "a[" << i << "] = " << std::fixed << a[i] << std::endl;
    }
    return out;
}

std::ostream& operator << (std::ostream & os, const Double &obj) {
    return obj.inserter(os);
}

double Double::operator[](int ind)const {
    assert(ind >= 0 && ind < len);
    return a[ind];
}