#include <iostream>
#include "Double.h"
using namespace std;

int main() {
    const int len1 = 10;
    const int len2 = 5;
    double arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    double arr2[] = { 10, 20, 30, 40, 50};
    Double obj1(arr1, len1);
    Double obj2;

    obj2.set_a(arr2, len2);
    
    cout << "objects before change:\n" << obj1 << endl << obj2 << endl;

    cout << "obj1 + obj2 = " << obj1 + obj2 << endl;
    obj1 += obj2;

    cout << "objects after change:\n" << obj1 << endl << obj2 << endl;
    cout << "3rd element of obj1" << obj1[2] << endl;
    
    return 0;
}