#include "Building.h"

Building::Building(string n, string a, double ar, int fl, double s) :name(n), address(a),area(ar), numfloors(fl), survitude(s) {}

ostream& Building::ins(ostream &out) const {
    out << "Building name: " << name << "\nAddress: "
        << address << "\nArea: " << area
        << "\nNumber of Floors: " << numfloors
        << "\nSurvitude: " << survitude;
        
    return out;
}

void Building::usability(ostream &out) const {
    out << "usability of the Building: "
        << area - area*survitude / 100;
}

Office::Office(string nme, string adr, double ar, int nfloor, double serv, int nof) :
    Building(nme, adr, ar, nfloor, serv), numoffice(nof) {}

ostream& Office::ins(ostream &out) const {
    Building::ins(out);
    out << "\nNumber of offices: " << numoffice;
    return out;
}

Hotel::Hotel(string nme, string adr, double ar, int nflr, double serv, int nrms, int naprts) : 
    Building(nme, adr, ar, nflr, serv), numroom(nrms), numapart(naprts) {}

ostream& Hotel::ins(ostream &out) const {
    Building::ins(out);
    out << "\nNumber of rooms: " << numroom
        << "\nNumber of apartments: " << numapart;
        
    return out;
}

Factory::Factory(string n, string a, double ar, int nf, double serv, int nof, int nw, int nsf) :
    Office(n, a, ar, nf, serv, nof), numwhr(nw), numsubfactory(nsf) {}

ostream & Factory::ins(ostream & out) const {
    Office::ins(out);
    out << "\nNumber of warehouses: " << numwhr
        << "\nNumber of subfactories: " << numsubfactory;
        
    return out;
}


ostream& operator<<(ostream &out, const Building &b) {
    b.ins(out);
    return out;
}