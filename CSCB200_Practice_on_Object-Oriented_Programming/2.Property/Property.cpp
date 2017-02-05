#include <iostream>
#include "Property.h"
using namespace std;
 
Property::Property() {
     nameOwner = "no name";
     address = "no address";
     quadrature = 0;
     price_per_square_meter = 0.0;
}
 
Property::Property(string nameOwner, string address, int quadrature, double price) {
     this->nameOwner = nameOwner;
     this->address = address;
     this->quadrature = quadrature;
     this->price_per_square_meter = price;
}
 
void Property::setNameOwner(string nameOwner) { 
     this->nameOwner = nameOwner; 
}

string Property::getNameOwner() const {
     return this->nameOwner;
}

void Property::setAddress(string address) {
     this->address = address; 
}

string Property::getAddress() const {
     return this->address;
}

void Property::setQuadrature(int quadrature) {
     this->quadrature = quadrature; 
}

int Property::getQuadrature() const {
    return this->quadrature; 
}

void Property::setPrice(double price) {
     this->price_per_square_meter = price;
}

double Property::getPrice() const {
    return this->price_per_square_meter; 
}
 
void Property::EnterData(Property & property) {
     cout << "Enter name for owner: ";
     cin >> property.nameOwner;
 
     cout << "Enter address: ";
     cin >> property.address;
 
     cout << "Enter quadrature: ";
     cin >> property.quadrature;
 
     cout << "Enter price per square meter: ";
     cin >> property.price_per_square_meter;
}
 
void Property::PrintData(Property & property) {
     cout << "Name of owner: " << property.getNameOwner() << endl;
     cout << "Address: " << property.getAddress() << endl;
     cout << "Quadrature: " << property.getQuadrature() << endl;
     cout << "Price per square meter: " << property.getPrice() << endl;
}
 
Property Property::MostExpensiveProperty(Property * p, int n) {
     Property expensive = p[0];
     for (int i = 0; i < n; i++) {
         if (expensive.price_per_square_meter < p[i].price_per_square_meter) {
              expensive = p[i];
         }
     }
     return expensive;
}