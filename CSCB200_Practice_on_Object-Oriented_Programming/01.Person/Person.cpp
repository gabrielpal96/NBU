#include <iostream>
#include <cstring>
#include "Person.h"
using namespace std;

Cperson::Cperson() {
    name = new char[2];
    name = " ";
    weight = 0.;
    height = 0;
}

CPerson::CPerson(char * name, double weight, unsigned h)
    :weight(weight), height(h) {
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, strlen(name), name);
}

Cperson::~CPerson() { delete[] name; }

void CPerson::set_name(const char * name) {
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, strlen(name), name);
}

char* CPerson::get_name() const { return name; }

void CPerson::set_weight(double weight) { this->weight = weight; }
double CPerson::get_weight() const { return weight; }

void CPerson::set_height(unsigned h) { height = h; }
unsigned CPerson::get_height() const {return height; }

void Cperson::read() {
    cout << "Please, Enter Name: ";
    name = new char[100];
    cin.getline(name, 99);
    cout << "Please, Enter Weight in kg: ";
    cin >> weight;
    cout << "Please, Enter Height in cm: ";
    cin >> height;
    cin.ignore();
}

void CPerson::print() const {
    cout << "Name: " << name << endl;
    cout << "Weight: " << weight << endl;
    cout << "Height: " << height << endl;
}

double CPerson::bmi() const {
    return weight / ((0.01*height)*(0.01*height));
}

void CPerson::state() const {
    double tmp = this->bmi();
    if (tmp < 16) {
        cout << "severely underweight \n";
        return;
    }
    else if (tmp < 18.5) {
        cout << "underweight \n";
        return;
    }
    else if (tmp < 25) {
        cout << "normal \n";
        return;
    }
    else if (tmp < 30) {
        cout << "overweight \n";
        return;
    }
}