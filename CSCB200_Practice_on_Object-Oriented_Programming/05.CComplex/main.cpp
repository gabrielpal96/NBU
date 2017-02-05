#include <iostream>
#include "CComplex.h"
using namespace std;

int main() {
    CComplex a(1, 3), b(4, 3);
    cout << "a+b = " << a+b << endl;
    //(a.add(b)).print();
    //cout << endl;

    cout << "a-b = " << a-b << endl;
    //(a.sub(b)).print();
    //cout << endl;

    cout << "a*b = " << a*b << endl;
    //(a.multi(b)).print();
    //cout << endl;

    cout << "a/b = " << a/b << endl;
    //(a.div(b)).print();
    //cout << endl;

    cout << "~a = " << ~a << endl;
    cout << "a = " << a << endl;
    -a;
    cout << "a = " << a << endl;
    cout << "b^5 = " << (b ^ 5) << endl;
    
    return 0;
}