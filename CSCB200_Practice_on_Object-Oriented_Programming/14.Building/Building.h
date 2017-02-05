#ifndef BUILDING_H_
#define BUILDING_H_
#include <iostream>
#include <string>
using std::string;
using std::ostream;

class Building{
private:
    string name;
    string address;
    double area;
    int numfloors;
    double survitude;
public:
    Building(string = "", string = "", double = 0, int = 0, double = 0);
    virtual ostream & ins(ostream &)const;
    void usability(ostream &)const;
};

class Office : public Building {
private:
    int numoffice;
public:
    Office(string = "", string = "", double = 0, int = 0, double = 0, int = 0);
    ostream & ins(ostream &)const;
};

class Hotel : public Building {
private:
    int numroom;
    int numapart;
public:
    Hotel(string = "", string = "", double = 0, int = 0, double = 0, int = 0, int =0);
    ostream & ins(ostream &)const;
};

class Factory : public Office {
private:
    int numwhr;
    int numsubfactory;
public:
    Factory(string = "", string = "", double = 0, int = 0, double = 0, int = 0, int = 0, int = 0);
    ostream & ins(ostream &)const;
};

ostream & operator << (ostream &, const Building &);

#endif