#include <iostream>
#include "Person.h"
using namespace std;

int main() {
    size_t n=3;

    cout << "Please, Enter number of Persons: ";
    cin >> n;
    cin.ignore();
    CPerson * persons = new CPerson[n];
    for (size_t i = 0; i < n; i++) { 
        persons[i].read();
    }

    for (size_t i = 0; i < n; i++) {
        persons[i].print();
        cout << persons[i].get_name() << " has bmi " << persons[i].bmi() << endl;
        persons[i].state();
        if (i<n-1) {
            cout << CPerson::calindex(persons[i], persons[i+1]) << endl;
        }
    }
    
    delete[] persons;
    return 0;
}