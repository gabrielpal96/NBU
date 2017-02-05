#ifndef DOUBLE_H_
#define DOUBLE_H_
#include <iostream>

class Double{
private:
    friend Double operator+(const Double &, const Double &);
    double * a;
    size_t len;
public:
    Double(double * = 0, size_t = 0);
    ~Double();
    Double(const Double &);
    Double& operator=(const Double &);
    Double& operator+=(const Double &);
    
    double* get_a()const;
    void set_a(double *, size_t);
    size_t get_len() const;
    void set_len(size_t);
    std::ostream& inserter(std::ostream &) const;
    double operator[](int)const;
};

Double operator+(const Double &, const Double &);
std::ostream& operator<< (std::ostream &, const Double &);

#endif //DOUBLE_H_