#ifndef PROPERTY_H
#define PROPERTY_H
#include <string>
using std::string;

class Property {
private:
	string nameOwner;
	string address;
	int quadrature;
	double price_per_square_meter;
public:
	Property();
	Property(string, string, int, double);

	void setNameOwner(string);
	string getNameOwner()const;
	void setAddress(string);
	string getAddress()const;
	void setQuadrature(int);
	int getQuadrature()const;
	void setPrice(double);
	double getPrice()const;

	void EnterData(Property &);
	void PrintData(Property &);
	Property MostExpensiveProperty(Property *, int);
};

#endif //PROPERTY_H